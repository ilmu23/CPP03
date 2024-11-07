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
	this->_hp = 100;
	this->_ep = 100;
	this->_ap = 30;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "Named FragTrap constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ap = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy assignment FragTrap operator called" << std::endl;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ep = copy._ep;
	this->_ap = copy._ap;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (!this->_hp || !this->_ep)
	{
		if (!this->_hp)
			std::cout << "ScavTrap " << this->_name << "is dead!" << std::endl;
		else if (!this->_ep)
			std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " gives free high fives!" << std::endl;
	this->_ep--;
}
