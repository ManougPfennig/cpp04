#include "main.hpp"

int main( void )
{
	std::cout << "\n          Constructing Characters:\n" << std::endl;
	Character patronx = Character("Patronx");
	Character grandMechant = Character("Vilain");
	std::cout << "Character's names are '" << patronx.getName() << "' and '" << grandMechant.getName() << "'" << std::endl;


	std::cout << "\n\n\n\n\n          Trying use index limits:\n" << std::endl;
	patronx.use(-1, grandMechant);
	patronx.use(0, grandMechant);
	patronx.use(1, grandMechant);
	patronx.use(2, grandMechant);
	patronx.use(3, grandMechant);
	patronx.use(4, grandMechant);



	std::cout << "\n\n\n\n\n          Filling up character's inventory:\n" << std::endl;
	AMateria *glaceChocolat = new Ice;
	AMateria *glacePistache = new Ice;
	AMateria *siropPourLaToux = new Cure;
	AMateria *doliprane = new Cure;
	patronx.equip(glaceChocolat);
	patronx.equip(glacePistache);
	patronx.equip(siropPourLaToux);
	patronx.equip(doliprane);
	std::cout << "\n\n\n\n\n          Trying each inventory slot:\n" << std::endl;
	patronx.use(0, grandMechant);
	patronx.use(1, grandMechant);
	patronx.use(2, grandMechant);
	patronx.use(3, grandMechant);




	std::cout << "\n\n\n\n\n          Filling then emptying character's inventory (using unequip on each slot twice):\n" << std::endl;
	AMateria *ice1 = new Ice;
	AMateria *ice2 = new Ice;
	AMateria *cure1 = new Cure;
	AMateria *cure2 = new Cure;
	grandMechant.equip(ice1);
	grandMechant.equip(ice2);
	grandMechant.equip(cure1);
	grandMechant.equip(cure2);
	std::cout << std::endl;
	grandMechant.unequip(0);
	grandMechant.unequip(1);
	grandMechant.unequip(2);
	grandMechant.unequip(3);
	grandMechant.unequip(0);
	grandMechant.unequip(1);
	grandMechant.unequip(2);
	grandMechant.unequip(3);
	delete ice1;
	delete ice2;
	delete cure1;
	delete cure2;




	std::cout << "\n\n\n\n\n          Trying Materia's member functions clone/use/getType:\n" << std::endl;
	AMateria *stalactite = new Ice;
	AMateria *stalagmite = stalactite->clone();
	stalactite->use(patronx);
	stalagmite->use(grandMechant);
	std::cout << "stalactite is '" << stalactite->getType() << "' and stalagmite is also '" << stalagmite->getType() << "'" << std::endl;
	delete stalactite;
	delete stalagmite;




	std::cout << "\n\n\n\n\n          Trying MateriaSource member functions learnMateria/createMateria:\n" << std::endl;
	MateriaSource source = MateriaSource();
	AMateria *iceSource = new Ice;
	AMateria *cureSource = new Cure;
	AMateria *iceTest = NULL;
	AMateria *cureTest = NULL;
	std::cout << std::endl;

	iceTest = source.createMateria("ice");
	source.learnMateria(iceSource);
	iceTest = source.createMateria("ice");
	std::cout << std::endl;

	cureTest = source.createMateria("cure");
	source.learnMateria(cureSource);
	cureTest = source.createMateria("cure");
	std::cout << std::endl;

	delete iceSource;
	delete cureSource;
	delete iceTest;
	delete cureTest;

	return (0);
}