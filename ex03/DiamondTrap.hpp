
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string	_name;
		DiamondTrap();
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const &diamondtrap);
		DiamondTrap& 	operator=(DiamondTrap const&);
		
		void whoAmI();
		using ScavTrap::attack;
};

#endif
