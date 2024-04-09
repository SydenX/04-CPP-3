
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		const std::string	_name;
		int				hitPoints;
		int				attackDamage;
		int				energyPoints;
		ClapTrap();
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &claptrap);
		ClapTrap& 	operator=(ClapTrap const&);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		int 	getHitPoints() const;
		int 	getAttackDamage() const;
		int 	getEnergy() const;
		std::string const getName() const;
};

#endif
