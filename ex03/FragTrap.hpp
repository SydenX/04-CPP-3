
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: virtual public ClapTrap {
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &fragtrap);
		FragTrap& 	operator=(FragTrap const&);

		void	highFivesGuys();
};

#endif
