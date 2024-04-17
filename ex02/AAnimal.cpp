#include "AAnimal.hpp"

// CONSTRUCTOR

AAnimal::AAnimal(void){

	std::cout << "Default AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& toCopy){

	std::cout << "Copy AAnimal constructor called" << std::endl;
	this->_type = toCopy._type;
	return ;
}

AAnimal&	AAnimal::operator=(const AAnimal& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return (*this);
}

// DESTRUCTOR

AAnimal::~AAnimal(void){

	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

// MEMBRE FUNCTION

void	AAnimal::makeSound(void) const{

	std::cout << "Basic AAnimal Sound ?" << std::endl;
	return ;
}

std::string	AAnimal::getType(void) const{

	return (this->_type);
}
