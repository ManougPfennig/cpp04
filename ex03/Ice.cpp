#include "Ice.hpp"

// CONSTRUCTOR

Ice::Ice(void){

	std::cout << "Ice constructed" << std::endl;
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice& toCopy){

	std::cout << "Ice copy assignement operator called" << std::endl;
	this->_type = Other.getType();
	return ;
}

// DESTRUCTOR

Ice::~Ice( void ){

	std::cout << "Ice destructed" << std::endl;
	return ;
}

// OPERATOR

Ice	&Ice::operator=( const Ice& Other){

	std::cout << "Ice equal assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other.getType();
	return (*this);
}

// MEMBER FUNCTIONS

std::string const &Ice::getType( void ){

	return (this->_type);
}

Ice&	Ice::clone( void ){

	std::cout << "Ice cloning called" << std::endl;
	return (new Ice(*this));
}

Ice&	Ice::use(ICharacter& target){

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
