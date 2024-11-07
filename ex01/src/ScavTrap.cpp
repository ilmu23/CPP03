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
	this->_hp = 100;
	this->_ep = 50;
	this->_ap = 20;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ap = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy assignment ScavTrap operator called" << std::endl;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ep = copy._ep;
	this->_ap = copy._ap;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (!this->_hp || !this->_ep)
	{
		if (!this->_hp)
			std::cout << "ScavTrap " << this->_name << "is dead!" << std::endl;
		else if (!this->_ep)
			std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_ap << " points of damage!" << std::endl;
	this->_ep--;
}

void	ScavTrap::guardGate(void)
{
	if (!this->_hp || !this->_ep)
	{
		if (!this->_hp)
			std::cout << "ScavTrap " << this->_name << "is dead!" << std::endl;
		else if (!this->_ep)
			std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
