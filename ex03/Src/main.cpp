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
	sub_title("Create Ice for 'src'");
	src->learnMateria(new Ice());

	sub_title("Create cure for 'src'");
	src->learnMateria(new Cure());

	sub_title("Create character 'me'");
	ICharacter* me = new Character("me");
	AMateria* tmp;

	sub_title("Create Ice for 'tmp'");
	tmp = src->createMateria("ice");

	sub_title("'me' equip the ice");
	me->equip(tmp);

	sub_title("Create Cure for 'src'");
	tmp = src->createMateria("cure");

	sub_title("'me' equip the cure");
	me->equip(tmp);

	sub_title("Create character 'bob'");
	ICharacter* bob = new Character("bob");

	sub_title("'bob' use idx=0");
	me->use(0, *bob);

	sub_title("'bob' use idx=1");
	me->use(1, *bob);

	sub_title("delete 'bob'");
	delete bob;

	sub_title("delete 'me'");
	delete me;
}



void	main_learn_materias(IMateriaSource* src)
{
	sub_title("'src' learn ice");
	src->learnMateria(new Ice());

	sub_title("'src' learn cure");
	src->learnMateria(new Cure());

	sub_title("'src' learn ice");
	src->learnMateria(new Ice());

	sub_title("'src' learn cure");
	src->learnMateria(new Cure());

	sub_title("Create new Cure");
	AMateria *mat = new Cure();

	sub_title("'src' learn the new cure cure");
	src->learnMateria(mat);
}



void	main_deep_copy()
{
	sub_title("Create Character 'dur0' named dur0");
	Character *dur0 = new Character("dur0");

	sub_title("'dur1' is a copy of dur0");
	ICharacter *dur1 = new Character(*dur0);

	sub_title("get 'dur1' name");
	std::cout << "\tdur1->getName() = " << dur1->getName() << std::endl;

	sub_title("delete 'dur0'");
	delete dur0;

	sub_title("delete 'dur1'");
	delete dur1;
}



void	main_equip_materias(IMateriaSource* src, ICharacter *dur2)
{
	AMateria* tmp;

	sub_title("Create Ice for AMateria 'tmp'");
	tmp = src->createMateria("ice");
	sub_title("'dur2' equip the ice");
	dur2->equip(tmp);

	sub_title("Create Cure for AMateria 'tmp'");
	tmp = src->createMateria("cure");
	sub_title("'dur2' equip the cure");
	dur2->equip(tmp);

	sub_title("Create 'hi' for 'tmp'");
	tmp = src->createMateria("hi");
	sub_title("'dur2' equip the 'hi'");
	dur2->equip(tmp);
}



void	main_max_equip(ICharacter *dur2)
{
	sub_title("Create Cure");
	AMateria *cure = new Cure();

	sub_title("Create Ice");
	AMateria *ice = new Ice();

	sub_title("'dur2' equip the cure");
	dur2->equip(cure);

	sub_title("'dur2' equip the cure");
	dur2->equip(cure);

	sub_title("'dur2' equip the ice");
	dur2->equip(ice);

	sub_title("'dur2' unequip idx=2");
	dur2->unequip(2);

	sub_title("delete the cure");
	delete cure; // Cure must be deleted manually when unequipped

	sub_title("'dur2' unequip idx=2");
	dur2->unequip(2);

	sub_title("'dur2' unequip idx=6");
	dur2->unequip(6);
}



void	main_use_on_new_character(ICharacter *dur2)
{
	sub_title("Create Character 'bob'");
	ICharacter* bob = new Character("Bob");

	sub_title("'dur2' use idx=0 sur 'bob'");
	dur2->use(0, *bob);

	sub_title("'dur2' use idx=1 sur 'bob'");
	dur2->use(1, *bob);

	sub_title("'dur2' use idx=2 sur 'bob'");
	dur2->use(2, *bob);
	
	sub_title("'dur2' use idx=6 sur 'bob'");
	dur2->use(6, *bob);

	sub_title("'dur2' use idx=-4 sur 'bob'");
	dur2->use(-4, *bob);

	sub_title("'dur2' use idx=3 sur 'bob'");
	dur2->use(3, *bob);

	sub_title("delete 'bob'");
	delete bob;
}



int main() 
{

	title("0. CREATE SRC");
	sub_title("Create MateriaSource 'src'");
	IMateriaSource* src = new MateriaSource();
	main1(src);
	sub_title("delete 'src'");
	delete src;
	std::cout << std::endl;

	title("1. LEARN MATERIAS");
	sub_title("Create Materia");
	src = new MateriaSource();
	main_learn_materias(src);
	std::cout << std::endl;

	title("2. DEEP COPY");
	main_deep_copy();
	std::cout << std::endl;

	title("3. EQUIP MATERIAS");
	sub_title("Create Character 'dur2'");
	ICharacter *dur2 = new Character("dur2");
	main_equip_materias(src, dur2);
	sub_title("delete 'src'");
	delete src;
	std::cout << std::endl;

	title("4. MAX EQUIP");
	main_max_equip(dur2);
	std::cout << std::endl;

	title("5. USE MATERIAS ON NEW CHARACTER");
	main_use_on_new_character(dur2);
	sub_title("delete 'dur2'");
	delete dur2;
	std::cout << std::endl;

	return (0); 
}