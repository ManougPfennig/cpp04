#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <iostream>

class ICharacter
{
	public:

		virtual 				ICharacter( void );
		virtual					ICharacter(std::string const & type);
		virtual ICharacter&		operator=( const ICharacter& Other );
		virtual					 ~ICharacter() {}

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif