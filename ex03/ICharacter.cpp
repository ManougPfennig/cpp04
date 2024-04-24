#include "ICharacter.hpp"

std::string const & ICharacter::getName() const {

	std::cout << "ICharacter default getName" << std::endl;
	return ("Default ICharacter");
}

void ICharacter::equip(AMateria* m) {

	std::cout << "ICharacter default equip: " << m->getType << std::endl;
	return ;
}

void ICharacter::unequip(int idx) {

	std::cout << "ICharacter default unequip" << std::endl;
	return ;
}

void ICharacter::use(int idx, ICharacter& target) {

	std::cout << "ICharacter default use: " << target.getName() << std::endl;
	return ;
}
