#include "WrongAnimal.hpp"

// CONSTRUCTOR

WrongAnimal::WrongAnimal(void){

	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy){

	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	this->_type = toCopy._type;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return (*this);
}

// DESTRUCTOR

WrongAnimal::~WrongAnimal(void){

	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

// MEMBRE FUNCTION

void	WrongAnimal::makeSound(void){

	std::cout << "Basic WrongAnimal Sound ???" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void){

	return (this->_type);
}
