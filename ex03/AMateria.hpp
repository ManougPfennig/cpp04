#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
// # include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string	_type;

	public:

						AMateria( void );
						AMateria(std::string const& type);
						AMateria(const AMateria& toCopy);
	virtual				~AMateria() {};
	AMateria&			operator=( const AMateria& Other );

	virtual std::string const &	getType (void ) const = 0; //Returns the materia type
	virtual AMateria*			clone( void ) const = 0; // returns a new copy of the materia
	virtual void				use(ICharacter& target) const = 0; // use of the materia on target

};

#endif
