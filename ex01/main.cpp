#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int	size = 2;
	const Animal*	tab[size];

	for (int i = 0; i < size / 2; i++)
		tab[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		tab[i] = new Cat();
	for (int i = 0; i < size; i++)
		tab[i]->makeSound();
	for (int i = 0; i < size; i++)
		delete tab[i];
	return (0);
}

