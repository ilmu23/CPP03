// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<FragTrap.cpp>>

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->setHP(100);
	this->setEP(100);
	this->setAP(30);
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "Named FragTrap constructor called" << std::endl;
	this->setHP(100);
	this->setEP(100);
	this->setAP(30);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy assignment FragTrap operator called" << std::endl;
	this->setName(copy.getName());
	this->setHP(copy.getHP());
	this->setEP(copy.getEP());
	this->setAP(copy.getAP());
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (!this->getHP() || !this->getEP())
	{
		if (!this->getHP())
			std::cout << "ScavTrap " << this->getName() << "is dead!" << std::endl;
		else if (!this->getEP())
			std::cout << "ScavTrap " << this->getName() << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " gives free high fives!" << std::endl;
	this->setEP(this->getEP() - 1);
}
