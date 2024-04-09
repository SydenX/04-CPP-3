
#include "DiamondTrap.hpp"

//Constructor
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	this->setName(name + "_clap_name");
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergy(ScavTrap::getEnergy());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap " << this->_name << " created!" << std::endl;
}

//Destructor
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " destroyed!" << std::endl;
}

//Copy-Constructor
DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap): ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap) {
	*this = diamondtrap;
}

//Copy-Assignment Operator Overload
DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &diamondtrap){
	this->_name = (diamondtrap.getName());
	this->setHitPoints(diamondtrap.getHitPoints());
	this->setEnergy(diamondtrap.getEnergy());
	this->setAttackDamage(diamondtrap.getAttackDamage());
	return *this;
}

void	DiamondTrap::whoAmI(){
	std::cout << "Do I really know, who Am I?" << std::endl;
	std::cout << "I'm " << this->_name << " and my Clap's name is " << this->getName() << " !" << std::endl;
}
