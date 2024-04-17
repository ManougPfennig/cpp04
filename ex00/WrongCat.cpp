#include "WrongCat.hpp"

// CONSTRUCTOR

WrongCat::WrongCat(void){

	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat& toCopy){

	std::cout << "Copy WrongCat constructor called" << std::endl;
	this->_type = toCopy._type;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other._type;
	return (*this);
}

// DESTRUCTOR

WrongCat::~WrongCat(void){

	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

// MEMBRE FUNCTION

void	WrongCat::makeSound(void){

	std::cout << "Miaaouuuuu (but in a wrong way)" << std::endl;
	return ;
}
