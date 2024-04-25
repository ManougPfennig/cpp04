#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		std::string _name;
		AMateria *_inventory[4] = {NULL, NULL, NULL, NULL};

	public:

		Character( void ); // DEFAULT CONSTRUCTOR
		Character (std::string name); // NAMED CONSTRUCTOR
		Character(const Character &toCopy); // RECOPY CONSTRUCTOR
		~Character( void ); // DESTRUCTOR
		Character &operator=(const Character&); // OPERATOR OVERRIDE


		// MEMBER FUNCTIONS
		std::string const &	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

};

#endif