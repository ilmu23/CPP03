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

		// get
		std::string	getName(void) const;
		uint32_t	getHP(void) const;
		uint32_t	getEP(void) const;
		uint32_t	getAP(void) const;

		// set
		void	setName(const std::string &name);
		void	setHP(const uint32_t &value);
		void	setEP(const uint32_t &value);
		void	setAP(const uint32_t &value);

		// misc
		void	attack(const std::string &target);
		void	takeDamage(uint32_t amount);
		void	beRepaired(uint32_t amount);
};

#endif
