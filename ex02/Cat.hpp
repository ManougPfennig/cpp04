#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

	private:
		Brain	*_brain;

	public:
					Cat( void );
					Cat (const Cat& toCopy);
					~Cat( void );
		Cat&		operator=( const Cat& Other );

		void		makeSound( void ) const;

};

#endif
