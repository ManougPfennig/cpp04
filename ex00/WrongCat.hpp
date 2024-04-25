#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private:

	public:
					WrongCat( void );
					WrongCat (const WrongCat& toCopy);
					~WrongCat( void );
		WrongCat&		operator=( const WrongCat& Other );


};

#endif
