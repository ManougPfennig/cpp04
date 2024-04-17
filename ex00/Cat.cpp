#include "Cat.hpp"

// CONSTRUCTOR

Cat::Cat(void){

	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "cat";
	return ;
}

Cat::Cat(const Cat& toCopy){

	std::cout << "Copy Cat constructor called" << std::endl;
	this->_type = toCopy._type;
	return ;
}

Cat&	Cat::operator=(const Cat& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return (*this);
}

// DESTRUCTOR

Cat::~Cat(void){

	std::cout << "Cat destructor called" << std::endl;
	return ;
}

// MEMBRE FUNCTION

void	Cat::makeSound(void){

	std::cout << "Miaaouuuuu" << std::endl;
	return ;
}
