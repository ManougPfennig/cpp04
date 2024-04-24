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
			this->_inventory[i] = toCopy._inventory[i].clone();
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
				if (toCopy._inventory[i])
					this->_inventory[i] = toCopy._inventory[i].clone();
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
		if (this->_inventory[i] && &(this->_inventory[i]) == m)
		{
			std::cout << this->getName << ": item cannot be equipped twice" << std::endl;
			return ;
		}
	// look for an empty slot to store the Materia in
	for (int i = 0; i <= 3; i++)
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " added to " << this->getName() << "'s inventory";
			if (i == 3)
				std::cout << " (now full)";
			std::cout << std::endl;
			return ;
		}
	// display message if no empty slot has been found
	std::cout << this->getName() << "'s inventory is already full" << std::endl;
	return ;
}

void Character::unequip(int idx) {

	// check if index is valid and if the slot contains a Materia
	if ((i >= 0 && i <= 3) && this->_inventory[i])
	{
		std::cout << this->getName() << " unequiped " << this->_inventory[i].getType() << std::endl;
		this->_inventory[i] = NULL;
		return ;
	}
	// display message if no Materia has been unequipped
	std::cout << this->getName() << ": Cannot unequip this slot" << std::endl;
	return ;
}

void Character::use(int idx, Character& target) {

	// check if index is valid and if the slot contains a Materia
	if ((i >= 0 && i <= 3) && this->_inventory[i])
	{
		std::cout << this->getName() << " uses " << this->_inventory[i].getType() << " on " << target.getName() << std::endl;
		this->_inventory[i].use(target);
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
		return ;
	}
	// display message if no Materia has been used
	std::cout << this->getName() << ": no Materia to use" << std::endl;
	return ;
}
