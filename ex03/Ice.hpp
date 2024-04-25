#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria {

	private:

	public:

		Ice( void ); // DEFAULT CONSTRUCTOR
		Ice(const Ice &toCopy); // RECOPY CONSTRUCTOR
		~Ice( void ); // DESTRUCTOR
		Ice &operator=(const Ice&); // OPERATOR OVERRIDE

		// FUNCTION
		AMateria*			clone( void ) const;
		void				use(ICharacter &target) const;
		std::string const&	getType ( void ) const; //Returns the materia type

};

#endif