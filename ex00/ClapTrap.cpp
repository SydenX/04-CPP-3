
#include "ClapTrap.hpp"

//Constructor
ClapTrap::ClapTrap(std::string name): _name(name), hitPoints(10), attackDamage(0), energyPoints(10) {
	std::cout << _name << " initalized" << std::endl;
}

//Destructor
ClapTrap::~ClapTrap() {
	std::cout << _name << " destroyed" << std::endl;
}

//Copy-Constructor
ClapTrap::ClapTrap(ClapTrap const &claptrap): _name(claptrap.getName()) {
	*this = claptrap;
}

//Copy-Assignment Operator Overload
ClapTrap&	ClapTrap::operator=(ClapTrap const &claptrap){
	this->hitPoints = claptrap.getHitPoints();
	this->attackDamage = claptrap.getAttackDamage();
	this->energyPoints = claptrap.getEnergy();
	return *this;
}

std::string const ClapTrap::getName() const{
	return this->_name;
}

int ClapTrap::getHitPoints() const{
	return this->hitPoints;
}

int ClapTrap::getAttackDamage() const{
	return this->attackDamage;
}

int ClapTrap::getEnergy() const{
	return this->energyPoints;
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->hitPoints -= amount;
	if (this->hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << " is dead.." << std::endl;
		this->hitPoints = 0;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " point of damage, he has now " << this->hitPoints << " hitPoints left." << std::endl;
}

void	ClapTrap::attack(const std::string& target){
	if (this->energyPoints == 0){
		std::cout << "ClapTrap " << this->_name << " is out of energy.." << std::endl;
		return; }
	this->energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints == 0){
		std::cout << "ClapTrap " << this->_name << " is out of energy.." << std::endl;
		return; }
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " his repairing itself of " << amount << " hitPoints, he has now " << this->hitPoints << " hitPoints left." << std::endl;
}
