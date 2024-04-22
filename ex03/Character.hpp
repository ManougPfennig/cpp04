#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include <iostream>
# include "AMateria.hpp"

class Character : ICharacter {

	private:
		std::string _name;
		AMateria *_inventory[4] = {NULL, NULL, NULL, NULL};

	public:

		Character( void ); // DEFAULT CONSTRUCTOR
		Character (std::string name) // NAMED CONSTRUCTOR
		Character(const Character &c); // RECOPY CONSTRUCTOR
		~Character( void ); // DESTRUCTOR
		Character &operator=(const Character&); // OPERATOR OVERRIDE

};

#endif