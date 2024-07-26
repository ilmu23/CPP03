// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<main.cpp>>

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	nameless;
	ClapTrap	steve("Steve");

	nameless.attack("Steve");
	steve.takeDamage(6);
	steve.attack("Someone");
	steve.attack("Someone");
	steve.attack("Someone");
	steve.attack("Someone");
	steve.attack("Someone");
	steve.attack("Someone");
	steve.beRepaired(42);
	steve.attack("Someone");
	steve.attack("Someone");
	steve.attack("Someone");
	steve.attack("Someone");
	steve.attack("Someone");
	steve.takeDamage(4242);
	steve.attack("Someone");
	return 0;
}
