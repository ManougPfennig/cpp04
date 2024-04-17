#include "Brain.hpp"

// CONSTRUCTOR

Brain::Brain(void){

	std::cout << "Default Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& toCopy){

	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = toCopy._ideas[i];
	return ;
}

Brain&	Brain::operator=(const Brain& Other){

	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &Other)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = Other._ideas[i];
	return (*this);
}

// DESTRUCTOR

Brain::~Brain(void){

	std::cout << "Brain destructor called" << std::endl;
	return ;
}
