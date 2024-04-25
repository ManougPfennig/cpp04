#include "AMateria.hpp"

// CONSTRUCTOR

AMateria::AMateria(void){

	std::cout << "default AMAteria contructed" << std::endl;
	this->_type.clear();
	return ;
}

AMateria::AMateria(std::string const & type){

	std::cout << type << " AMAteria contructed" << std::endl;
	this->_type = type;
	return ;
}

AMateria::AMateria(const AMateria& toCopy){

	std::cout << "AMateria copy assignement operator called" << std::endl;
	this->_type = toCopy.getType();
	return ;
}

// OPERATOR

AMateria	&AMateria::operator=( const AMateria& Other){

	std::cout << "AMateria equal assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other.getType();
	return (*this);
}
