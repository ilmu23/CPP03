// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<ClapTrap.cpp>>

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "name me, dumbass";
	this->_hp = 10;
	this->_ep = 10;
	this->_ap = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "Named constructor called" << std::endl;
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_ap = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ep = copy._ep;
	this->_ap = copy._ap;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

// get

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

uint32_t	ClapTrap::getHP(void) const
{
	return this->_hp;
}

uint32_t	ClapTrap::getEP(void) const
{
	return this->_ep;
}

uint32_t	ClapTrap::getAP(void) const
{
	return this->_ap;
}

// set

void	ClapTrap::setName(const std::string &name)
{
	this->_name = name;
}

void	ClapTrap::setHP(const uint32_t &value)
{
	this->_hp = value;
}

void	ClapTrap::setEP(const uint32_t &value)
{
	this->_ep = value;
}

void	ClapTrap::setAP(const uint32_t &value)
{
	this->_ap = value;
}

// misc

void	ClapTrap::attack(const std::string &target)
{
	if (!this->_hp || !this->_ep)
	{
		if (!this->_hp)
			std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		else if (!this->_ep)
			std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_ap << " points of damage!" << std::endl;
	this->_ep--;
}

void	ClapTrap::takeDamage(uint32_t amount)
{
	if (!this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hp -= std::min(this->_hp, amount);
}

void	ClapTrap::beRepaired(uint32_t amount)
{
	if (!this->_hp || !this->_ep)
	{
		if (!this->_hp)
			std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		else if (!this->_ep)
			std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
	if (this->_hp + amount < this->_hp)
		this->_hp = UINT32_MAX;
	else
		this->_hp += amount;
}
