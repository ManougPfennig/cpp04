#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {

	protected:
		std::string	_type;
	
	public:
						WrongAnimal( void );
						WrongAnimal(const WrongAnimal& toCopy);
						~WrongAnimal( void );
		WrongAnimal&	operator=( const WrongAnimal& Other );

		virtual	void	makeSound( void );
		std::string		getType( void );

};

#endif