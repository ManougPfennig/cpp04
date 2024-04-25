#include "MateriaSource.hpp"

// CONSTRUCTOR

MateriaSource::MateriaSource(void){

	std::cout << "Default MateriaSource constructed" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& toCopy){

	std::cout << "MateriaSource copy assignement operator called" << std::endl;
	// Clone models
	for (int i = 0; i < 4; i++)
		if (toCopy._models[i] != NULL)
		{
			delete this->_models[i];
			this->_models[i] = toCopy._models[i]->clone();
		}
	return ;
}

// DESTRUCTOR

MateriaSource::~MateriaSource( void ){

	for (int i = 0; i <= 3; i++)
		if (this->_models[i])
			delete this->_models[i];
	std::cout << "MateriaSource destructed: " << std::endl;
	return ;
}

// OPERATOR

MateriaSource	&MateriaSource::operator=( const MateriaSource& Other){

	std::cout << "MateriaSource equal assignement operator called" << std::endl;
	if (this != &Other)
	{
		// Copy models
		for (int i = 0; i < 4; i++)
			if (Other._models[i] != NULL)
			{
				delete this->_models[i];
				this->_models[i] = Other._models[i]->clone();
			}
	}
	return (*this);
}

// MEMBER FUNCTIONS

void MateriaSource::learnMateria(AMateria *m){

	// check if a slot is available to store a clone of the Materia
	for (int i = 0; i <= 3; i++)
		if (this->_models[i] == NULL)
		{
			this->_models[i] = m->clone();
			std::cout << "MateriaSource: Materia learned successfully: " << m->getType() << std::endl;
			return ;
		}
	// display message if no slots are available
	std::cout << "MateriaSource: Could not learn Materia" << std::endl;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type){

	for (int i = 0; i <= 3; i++)
		if (this->_models[i] && this->_models[i]->getType() == type)
		{
			std::cout << "MateriaSource: type created successfully: " << type << std::endl;
			return (this->_models[i]->clone());
		}
	std::cout << "MateriaSource: Unknown Materia type: " << type << std::endl;
	return (NULL);
}
