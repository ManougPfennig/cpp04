#include "Cure.hpp"

// CONSTRUCTOR

Cure::Cure(void){

	std::cout << "Cure constructed" << std::endl;
	this->_type = "cure";
	return ;
}

Cure::Cure(const Cure& toCopy){

	std::cout << "Cure copy assignement operator called" << std::endl;
	this->_type = Other.getType();
	return ;
}

// DESTRUCTOR

Cure::~Cure( void ){

	std::cout << "Cure destructed" << std::endl;
	return ;
}

// OPERATOR

Cure	&Cure::operator=( const Cure& Other){

	std::cout << "Cure equal assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other.getType();
	return (*this);
}

// MEMBER FUNCTIONS

std::string const &Cure::getType( void ){

	return (this->_type);
}

Cure&	Cure::clone( void ){

	std::cout << "Cure cloning called" << std::endl;
	return (new Cure(*this));
}

Cure&	Cure::use(ICharacter& target){

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
