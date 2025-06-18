#include "../Include/poly.hpp"


void	title(const std::string str)
{
	std::string	title;

	if (str.length() + 2 >= 42)
		return ;

	title.append(" " + str + " ");
	while (title.length() < 42)
		title.append("~");
	
	std::cout << YELLOW << title << RESET << std::endl;
}

void	sub_title(const std::string str)
{
	std::string	title;

	title.append("        ~~~ " + str + " ");
	while (title.length() < 42)
		title.append("~");
	
	std::cout << CYAN << title << RESET << std::endl;
}

void	main1(IMateriaSource* src)
{
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	delete bob;
	delete me;
}

void	main_learn_materias(IMateriaSource* src)
{
	// std::cout << "1. Create new MateriaSource and learn materias (check maximum too):" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria *mat = new Cure();
	src->learnMateria(mat);
	std::cout << std::endl;
}

void	main_deep_copy()
{
	// std::cout << "2. Create 2 new characters and test deep copy:" << std::endl;
	Character *dur0 = new Character("Alice");
	ICharacter *dur1 = new Character(*dur0);
	delete dur0;
	delete dur1;
	std::cout << std::endl;
}

void	main_equip_materias(IMateriaSource* src, ICharacter *dur2)
{
	// std::cout << "3. Create materias and equip them (also check unknown materias):" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	dur2->equip(tmp);
	tmp = src->createMateria("cure");
	dur2->equip(tmp);
	tmp = src->createMateria("hi");
	dur2->equip(tmp);
	std::cout << std::endl;
}

void	main_max_equip(ICharacter *dur2)
{
	// std::cout << "4. Check maximum equipped too:" << std::endl;
	AMateria *cure = new Cure();
	AMateria *ice = new Ice();
	dur2->equip(cure);
	dur2->equip(cure);
	dur2->equip(ice);
	dur2->unequip(2);
	delete cure; // Cure must be deleted manually when unequipped
	dur2->unequip(2);
	dur2->unequip(6);
	std::cout << std::endl;
}

void	main_use_new_character(ICharacter *dur2)
{
	// std::cout << "5. Use materias on new chacarter:" << std::endl;
	ICharacter* bob = new Character("Bob");
	dur2->use(0, *bob);
	dur2->use(1, *bob);
	dur2->use(2, *bob);
	dur2->use(6, *bob);
	dur2->use(-4, *bob);
	dur2->use(3, *bob);
	delete bob;
	std::cout << std::endl;
}

int main() 
{

	title("0. CREATE SRC");
	IMateriaSource* src = new MateriaSource();
	main1(src);
	delete src;

	title("1. LEARN MATERIALS");
	src = new MateriaSource();
	main_learn_materias(src);

	title("2. DEEP COPY");
	main_deep_copy();

	title("3. EQUIP MATERIALS");
	ICharacter *dur2 = new Character("Alice");
	main_equip_materias(src, dur2);
	delete src;

	title("4. MAX EQUIP");
	main_max_equip(dur2);

	title("5. MATERIALS ON NEW CHARACTER");
	main_use_new_character(dur2);

	delete dur2;

	return (0); 
}