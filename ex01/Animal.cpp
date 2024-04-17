#include "Animal.hpp"

// CONSTRUCTOR

Animal::Animal(void){

	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal& toCopy){

	std::cout << "Copy Animal constructor called" << std::endl;
	this->_type = toCopy._type;
	return ;
}

Animal&	Animal::operator=(const Animal& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return (*this);
}

// DESTRUCTOR

Animal::~Animal(void){

	std::cout << "Animal destructor called" << std::endl;
	return ;
}

// MEMBRE FUNCTION

void	Animal::makeSound(void) const{

	std::cout << "Basic Animal Sound ?" << std::endl;
	return ;
}

std::string	Animal::getType(void) const{

	return (this->_type);
}
