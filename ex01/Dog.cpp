#include "Dog.hpp"

// CONSTRUCTOR

Dog::Dog(void){

	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "dog";
	this->_brain = new Brain;
	return ;
}

Dog::Dog(const Dog& toCopy){

	std::cout << "Copy Dog constructor called" << std::endl;
	this->_type = toCopy._type;
	this->_brain = new Brain(*(toCopy._brain));
	return ;
}

Dog&	Dog::operator=(const Dog& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
	{
		this->_type = Other._type;
		delete this->_brain;
		this->_brain = new Brain(*(Other._brain));
	}
	return (*this);
}

// DESTRUCTOR

Dog::~Dog(void){

	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;

	return ;
}

// MEMBRE FUNCTION

void	Dog::makeSound(void) const{

	std::cout << "WOUF" << std::endl;
	return ;
}
