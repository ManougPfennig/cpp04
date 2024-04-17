#include "Cat.hpp"

// CONSTRUCTOR

Cat::Cat(void){

	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "cat";
	this->_brain = new Brain;
	return ;
}

Cat::Cat(const Cat& toCopy){

	std::cout << "Copy Cat constructor called" << std::endl;
	this->_type = toCopy._type;
	this->_brain = new Brain(*(toCopy._brain));
	return ;
}

Cat&	Cat::operator=(const Cat& Other){

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

Cat::~Cat(void){

	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

// MEMBRE FUNCTION

void	Cat::makeSound(void) const{

	std::cout << "Miaaouuuuu" << std::endl;
	return ;
}
