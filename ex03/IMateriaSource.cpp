#include "IMateriaSource.hpp"

void IMateriaSource::learnMateria(AMateria*){

	std::cout << "Default IMateriaSource learnMateria" << std::endl;
	return ;
}

AMateria* IMateriaSource::createMateria(std::string const & type){

	std::cout << "Default IMateriaSource createMateria" << std::endl;
	return (NULL);
}
