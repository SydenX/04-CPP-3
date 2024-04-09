
#include "ScavTrap.hpp"

//Constructor
ScavTrap::ScavTrap(std::string name): ClapTrap() {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << name << " created!" << std::endl;
}

//Destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroyed!" << std::endl;
}

//Copy-Constructor
ScavTrap::ScavTrap(ScavTrap const &scavtrap) {
	*this = scavtrap;
}

//Copy-Assignment Operator Overload
ScavTrap&	ScavTrap::operator=(ScavTrap const &scavtrap){
	this->setName(scavtrap.getName());
	this->setHitPoints(scavtrap.getHitPoints());
	this->setEnergy(scavtrap.getEnergy());
	this->setAttackDamage(scavtrap.getAttackDamage());
	return *this;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode." << std::endl;
}

void	ScavTrap::attack(std::string target){
	std::cout << "ScavTrap " << this->getName() << " is attacking " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
