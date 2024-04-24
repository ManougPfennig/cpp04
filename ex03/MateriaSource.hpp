#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : IMateriaSource {

	private:
		AMateria *_models[4] = {NULL, NULL, NULL, NULL};

	public:
		MateriaSource( void ); // DEFAULT CONSTRUCTOR
		MateriaSource (std::string name); // NAMED CONSTRUCTOR
		MateriaSource(const MateriaSource &toCopy); // RECOPY CONSTRUCTOR
		~MateriaSource( void ); // DESTRUCTOR
		MateriaSource &operator=(const MateriaSource&); // OPERATOR OVERRIDE

		// MEMBER FUNCTIONS
		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const & type);

};

#endif