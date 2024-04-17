#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int	size = 50;
//	AAnimal	peroquet;
	const AAnimal*	tab[size];

	for (int i = 0; i < size / 2; i++)
		tab[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		tab[i] = new Cat();
	std::cout << "\n\n" << std::endl;
	for (int i = 0; i < size; i++)
		tab[i]->makeSound();
	std::cout << "\n\n" << std::endl;
	for (int i = 0; i < size; i++)
		delete tab[i];
	return (0);
}

