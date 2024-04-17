#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal {

	private:

	public:
					Dog( void );
					Dog (const Dog& toCopy);
					~Dog( void );
		Dog&		operator=( const Dog& Other );

		void		makeSound( void );

};

#endif
