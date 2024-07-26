// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<ClapTrap.hpp>>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <cstdint>

class ClapTrap
{
	private:
		std::string	_name;
		uint32_t	_hp;
		uint32_t	_ep;
		uint32_t	_ap;

	public:

		ClapTrap(void);
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &copy);
		~ClapTrap(void);

		void	attack(const std::string &target);
		void	takeDamage(uint32_t amount);
		void	beRepaired(uint32_t amount);
};

#endif
