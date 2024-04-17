#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const WrongAnimal	wrongBasic;
	const WrongCat	wrongKitty;
	const WrongCat	wrongMae(wrongKitty);

	std::cout << "\n\n    makeSound function:\n" << std::endl;
	wrongBasic.makeSound();
	wrongKitty.makeSound();
	wrongMae.makeSound();

	std::cout << "\n\n    getType function:\n" << std::endl;
	std::cout << "wrongBasic WrongAnimal is: " << wrongBasic.getType() << std::endl;
	std::cout << "wrongKitty is: " << wrongKitty.getType() << std::endl;
	std::cout << "wrongMae is: " << wrongMae.getType() << std::endl;
	std::cout << "\n\n\n\n" << std::endl;

	Animal	basic;
	Dog		doggy;
	Dog		snoopy(doggy);
	Cat		kitty;
	Cat		mae(kitty);

	std::cout << "\n\n    makeSound function:\n" << std::endl;
	basic.makeSound();
	doggy.makeSound();
	snoopy.makeSound();
	kitty.makeSound();
	mae.makeSound();

	std::cout << "\n\n    getType function:\n" << std::endl;
	std::cout << "basic animal is: " << basic.getType() << std::endl;
	std::cout << "doggy is: " << doggy.getType() << std::endl;
	std::cout << "snoopy is: " << snoopy.getType() << std::endl;
	std::cout << "kitty is: " << kitty.getType() << std::endl;
	std::cout << "mae is: " << mae.getType() << std::endl;
	std::cout << std::endl;

	return (0);
}
