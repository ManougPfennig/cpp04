#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {

	private:
	std::string	_ideas[100];

	public:
				Brain( void );
				Brain (const Brain& toCopy);
				~Brain( void );
	Brain&		operator=( const Brain& Other );

};

#endif