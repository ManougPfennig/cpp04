#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

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
