#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {

	protected:
		std::string	_type;
	
	public:
						Animal( void );
						Animal(const Animal& toCopy);
						~Animal( void );
		Animal&			operator=( const Animal& Other );

		virtual	void	makeSound( void );
		std::string		getType( void );

};

#endif