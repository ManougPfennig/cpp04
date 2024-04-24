#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria {

	protected:
		std::string	_type;

	public:

						AMateria( void );
						AMateria(std::string const& type);
						AMateria(const AMateria& toCopy);
	virtual				~AMateria() = 0;
	AMateria&			operator=( const AMateria& Other );

	virtual std::string const&	getType( void ) const; //Returns the materia type
	virtual AMateria*			clone( void ) const; // returns a new copy of the materia
	virtual void				use(ICharacter& target) const; // use of the materia on target

};

#endif
