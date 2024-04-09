
#include "FragTrap.hpp"

//Constructor
FragTrap::FragTrap(std::string name): ClapTrap() {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << name << " created!" << std::endl;
}

//Destructor
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destroyed!" << std::endl;
}

//Copy-Constructor
FragTrap::FragTrap(FragTrap const &fragtrap) {
	*this = fragtrap;
}

//Copy-Assignment Operator Overload
FragTrap&	FragTrap::operator=(FragTrap const &fragtrap){
	this->setName(fragtrap.getName());
	this->setHitPoints(fragtrap.getHitPoints());
	this->setEnergy(fragtrap.getEnergy());
	this->setAttackDamage(fragtrap.getAttackDamage());
	return *this;
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->getName() << " is requesting a High Fives Guys!" << std::endl;
}
