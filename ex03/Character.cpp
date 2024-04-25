#include "Character.hpp"

// CONSTRUCTOR

Character::Character(void){

	std::cout << "Default Character constructed" << std::endl;
	this->_name = "Default Character";
	return ;
}

Character::Character(std::string name){

	std::cout << "Named Character constructed: " << name << std::endl;
	this->_name = name;
	return ;
}

Character::Character(const Character& toCopy){

	std::cout << "Character copy assignement operator called" << std::endl;
	// Clone name
	this->_name = toCopy.getName();
	// Clone inventory
	for (int i = 0; i < 4; i++)
		if (toCopy._inventory[i] != NULL)
			this->_inventory[i] = toCopy._inventory[i]->clone();
	return ;
}

// DESTRUCTOR

Character::~Character( void ){

	std::cout << "Character destructed: " << this->getName() << std::endl;
	for (int i = 0; i <= 3; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

// OPERATOR

Character	&Character::operator=( const Character& Other){

	std::cout << "Character equal assignement operator called" << std::endl;
	if (this != &Other)
	{
		// Copy name
		this->_name = Other.getName();
		// Copy inventory
		for (int i = 0; i < 4; i++)
			{
				if (this->_inventory[i])
					delete this->_inventory[i];
				this->_inventory[i] = NULL;
				if (Other._inventory[i])
					this->_inventory[i] = Other._inventory[i]->clone();
			}
	}
	return (*this);
}

// MEMBER FUNCTIONS

std::string const &Character::getName( void ) const{

	return (this->_name);
}
void Character::equip(AMateria* m) {

	// check if this specific Materia is already equipped
	for (int i = 0; i <= 3; i++)
		if (this->_inventory[i] && (this->_inventory[i]) == m)
		{
			std::cout << this->getName() << ": items cannot be equipped twice" << std::endl;
			return ;
		}
	// look for an empty slot to store the Materia in
	for (int i = 0; i <= 3; i++)
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " added to " << this->getName() << "'s inventory" << std::endl;
			return ;
		}
	// display message if no empty slot has been found
	std::cout << this->getName() << "'s inventory is already full" << std::endl;
	return ;
}

void Character::unequip(int idx) {

	// check if index is valid and if the slot contains a Materia
	if ((idx >= 0 && idx <= 3) && this->_inventory[idx])
	{
		std::cout << this->getName() << " unequiped " << this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = NULL;
		return ;
	}
	// display message if no Materia has been unequipped
	std::cout << this->getName() << ": Cannot unequip this slot" << std::endl;
	return ;
}

void Character::use(int idx, ICharacter& target) {

	// check if index is valid
	// check if the slot contains a Materia
	if (idx < 0 || idx > 3)
	{
		std::cout << this->getName() << ": invalid inventory slot" << std::endl;
		return ;
	}
	if (this->_inventory[idx])
	{
		std::cout << this->getName() << " uses " << this->_inventory[idx]->getType() << " on " << target.getName() << std::endl;
		this->_inventory[idx]->use(target);
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		return ;
	}
	// display message if no Materia has been used
	std::cout << this->getName() << ": no Materia to use" << std::endl;
	return ;
}
