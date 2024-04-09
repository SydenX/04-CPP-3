
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap {
	private:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const &scavtrap);
		ScavTrap& 	operator=(ScavTrap const&);

		void	guardGate();
		void	attack(std::string);
};

#endif
