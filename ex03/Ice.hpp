#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : AMateria {

	private:

	public:

		Ice( void ); // DEFAULT CONSTRUCTOR
		Ice(const Ice &toCopy); // RECOPY CONSTRUCTOR
		~Ice( void ); // DESTRUCTOR
		Ice &operator=(const Ice&); // OPERATOR OVERRIDE

		// FUNCTION
		Ice		&clone( void );
		void	use(ICharacter &target);

};

#endif