#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure : public AMateria {

	private:

	public:

		Cure( void ); // DEFAULT CONSTRUCTOR
		Cure(const Cure &toCopy); // RECOPY CONSTRUCTOR
		~Cure( void ); // DESTRUCTOR
		Cure &operator=(const Cure&); // OPERATOR OVERRIDE

		// FUNCTION
		AMateria*			clone( void ) const;
		void				use(ICharacter &target) const;
		std::string const&	getType ( void ) const; //Returns the materia type

};

#endif