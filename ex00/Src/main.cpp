#include "../Include/poly.hpp"

void	main_animal()
{
	std::cout << "\t~~~ Constructors ~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "\tanimal_1 :" << std::endl;
	const Animal*	animal_1 = new Animal();
	std::cout << "\tanimal_2 :" << std::endl;
	const Animal*	animal_2 = new Animal("Fox");
	std::cout << "\tanimal_3 :" << std::endl;
	const Animal*	animal_3 = new Animal(*animal_2);
	std::cout << std::endl;

	std::cout << "\t~~~ Show types ~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tanimal_1 type : " << animal_1->getType() << std::endl;
	std::cout << "\tanimal_2 type : " << animal_2->getType() << std::endl;
	std::cout << "\tanimal_3 type : " << animal_3->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "\t~~~ Louder! ~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tanimal_1 sound : " << std::endl;
	animal_1->makeSound();
	std::cout << std::endl;

	std::cout << "\t~~~ Destructors ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tanimal_1 :" << std::endl;
	delete	animal_1;
	std::cout << "\tanimal_2 :" << std::endl;
	delete	animal_2;
	std::cout << "\tanimal_3 :" << std::endl;
	delete	animal_3;
	std::cout << std::endl;
}

void	main_dog()
{
	std::cout << "\t~~~ Constructors ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tdog_1 :" << std::endl;
	const Animal*	dog_1 = new Dog();
	std::cout << "\tdog_2 :" << std::endl;
	const Dog*	dog_2 = new Dog("Not_a_dog");
	std::cout << "\tdog_3 :" << std::endl;
	Dog	dog_3(*dog_2);
	std::cout << std::endl;

	std::cout << "\t~~~ Show types ~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tdog_1 type : " << dog_1->getType() << std::endl;
	std::cout << "\tdog_2 type : " << dog_2->getType() << std::endl;
	std::cout << "\tdog_3 type : " << dog_3.getType() << std::endl;
	std::cout << std::endl;

	std::cout << "\t~~~ Louder! ~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tdog_1 sound : " << std::endl;
	dog_1->makeSound();
	std::cout << std::endl;

	std::cout << "\t~~~ Destructors ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tdog_1 :" << std::endl;
	delete	dog_1;
	std::cout << "\tdog_2 :" << std::endl;
	delete	dog_2;
	std::cout << "\tdog_3 :" << std::endl;
}

void	main_cat()
{
	std::cout << "\t~~~ Constructors ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tcat_1 :" << std::endl;
	const Animal*	cat_1 = new Cat();
	std::cout << "\tcat_2 :" << std::endl;
	const Cat*	cat_2 = new Cat("Not_a_cat");
	std::cout << "\tcat_3 :" << std::endl;
	Cat	cat_3(*cat_2);
	std::cout << std::endl;

	std::cout << "\t~~~ Show types ~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tcat_1 type : " << cat_1->getType() << std::endl;
	std::cout << "\tcat_2 type : " << cat_2->getType() << std::endl;
	std::cout << "\tcat_3 type : " << cat_3.getType() << std::endl;
	std::cout << std::endl;

	std::cout << "\t~~~ Louder! ~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tcat_1 sound : " << std::endl;
	cat_1->makeSound();
	std::cout << std::endl;

	std::cout << "\t~~~ Destructors ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\tcat_1 :" << std::endl;
	delete	cat_1;
	std::cout << "\tcat_2 :" << std::endl;
	delete	cat_2;
	std::cout << "\tcat_3 :" << std::endl;
}

void	main_wrong()
{
	std::cout << "\t~~~ Constructors ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\twrong_animal :" << std::endl;
	const WrongAnimal*	wrong_animal = new WrongAnimal();
	std::cout << "\twrong_cat :" << std::endl;
	const WrongAnimal*	wrong_cat = new WrongCat();
	std::cout << std::endl;

	std::cout << "\t~~~ Louder! ~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\twrong_animal sound : " << std::endl;
	wrong_animal->makeSound();
	std::cout << "\twrong_cat sound : " << std::endl;
	wrong_cat->makeSound();
	std::cout << std::endl;

	std::cout << "\t~~~ Destructors ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\twrong_animal :" << std::endl;
	delete	wrong_animal;
	std::cout << "\twrong_cat :" << std::endl;
	delete	wrong_cat;
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << " ANIMAL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	main_animal();
	std::cout << std::endl << std::endl;

	std::cout << " DOG ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	main_dog();
	std::cout << std::endl << std::endl;

	std::cout << " CAT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	main_cat();
	std::cout << std::endl << std::endl;

	std::cout << " WRONG ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	main_wrong();

	return (0);
}





// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// return 0;
// }
