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
	this->_type = Other.getType();
	return ;
}

// DESTRUCTOR

AMateria::~Amateria( void ){

	if (this->_type.length())
		std::cout << this->_type;
	else
		std::cout << "default";
	std::cout << " AMAteria destructed" << std::endl;
	return ;
}

// OPERATOR

AMateria	&AMateria::operator=( const AMateria& Other){

	std::cout << "AMateria equal assignement operator called" << std::endl;
	if (this != &Other)
		this->_type = Other.getType();
	return (*this);
}

// MEMBER FUNCTIONS

std::string const &AMateria::getType( void ){

	return (this->_type);
}

AMateria&	AMateria::clone( void ){

	std::cout << "AMateria cloning called" << std::endl;
	return (new AMateria(*this));
}

AMateria&	AMateria::use(ICharacter& target){

	std::cout << "Default AMateria used on " << target.getName() << std::endl;
	return ;
}
