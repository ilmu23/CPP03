// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<ScavTrap.cpp>>

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAP(20);
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAP(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy assignment ScavTrap operator called" << std::endl;
	this->setName(copy.getName());
	this->setHP(copy.getHP());
	this->setEP(copy.getEP());
	this->setAP(copy.getAP());
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (!this->getHP() || !this->getEP())
	{
		if (!this->getHP())
			std::cout << "ScavTrap " << this->getName() << "is dead!" << std::endl;
		else if (!this->getEP())
			std::cout << "ScavTrap " << this->getName() << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target
		<< ", causing " << this->getAP() << " points of damage!" << std::endl;
	this->setEP(this->getEP() - 1);
}

void	ScavTrap::guardGate(void)
{
	if (!this->getHP() || !this->getEP())
	{
		if (!this->getHP())
			std::cout << "ScavTrap " << this->getName() << "is dead!" << std::endl;
		else if (!this->getEP())
			std::cout << "ScavTrap " << this->getName() << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
}
