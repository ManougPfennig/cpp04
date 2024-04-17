#include "Dog.hpp"

// CONSTRUCTOR

Dog::Dog(void){

	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "dog";
	return ;
}

Dog::Dog(const Dog& toCopy){

	std::cout << "Copy Dog constructor called" << std::endl;
	this->_type = toCopy._type;
	return ;
}

Dog&	Dog::operator=(const Dog& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return (*this);
}

// DESTRUCTOR

Dog::~Dog(void){

	std::cout << "Dog destructor called" << std::endl;
	return ;
}

// MEMBRE FUNCTION

void	Dog::makeSound(void){

	std::cout << "WOUF" << std::endl;
	return ;
}
