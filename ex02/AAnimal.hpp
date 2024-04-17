#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>

class AAnimal {

	protected:
		std::string	_type;
	
	public:
						AAnimal( void );
						AAnimal(const AAnimal& toCopy);
		virtual			~AAnimal( void );
		AAnimal&			operator=( const AAnimal& Other );

		virtual	void	makeSound( void ) const = 0;
		std::string		getType( void ) const;

};

#endif