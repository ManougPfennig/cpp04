#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.hpp"


class IMateriaSource {

	private:

	AMateria *learned[4] = {NULL, NULL, NULL, NULL};

	public:

		virtual 					IMateriaSource( void );
		virtual						IMateriaSource(std::string const & type);
		virtual IMateriaSource&		operator=( const IMateriaSource& Other );
		virtual						~IMateriaSource() {}

		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif