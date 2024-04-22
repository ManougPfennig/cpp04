#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure : AMateria {

	private:

	public:

		Cure( void ); // DEFAULT CONSTRUCTOR
		Cure(const Cure &toCopy); // RECOPY CONSTRUCTOR
		~Cure( void ); // DESTRUCTOR
		Cure &operator=(const Cure&); // OPERATOR OVERRIDE

		// FUNCTION
		Cure	&clone( void );
		void	use(ICharacter &target);

};

#endif