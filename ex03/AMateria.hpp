#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class AMateria {

	protected:


	public:

	virtual 					AMateria( void );
	virtual						AMateria(std::string const & type);
	virtual						~AMateria();
	virtual AMateria&			operator=( const AMateria& Other );

	virtual std::string const &	getType( void ) const; //Returns the materia type
	virtual AMateria*			clone() const = 0;
	virtual void				use(ICharacter& target);

};

#endif
