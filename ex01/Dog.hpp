#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain	*_brain;

	public:
					Dog( void );
					Dog (const Dog& toCopy);
					~Dog( void );
		Dog&		operator=( const Dog& Other );

		void		makeSound( void ) const;

};

#endif
