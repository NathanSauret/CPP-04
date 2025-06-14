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

void	main_testing()
{
	sub_title("Constructors of Animal[10]");
	const Animal	*animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			std::cout << BOLDMAGENTA << "\tcat:" << RESET << std::endl;
			animals[i] = new Cat();
		}
		else
		{
			std::cout << BOLDMAGENTA << "\tdog:" << RESET << std::endl;
			animals[i] = new Dog();
		}
	}
	std::cout << std::endl;

	sub_title("Testing");
	for (int i = 0; i < 10; i++)
	{
		std::cout << BOLDMAGENTA << "\t" << animals[i]->getType() << ":" << RESET << std::endl;
		animals[i]->makeSound();
	}
	std::cout << std::endl;

	sub_title("Destructors");
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			std::cout << BOLDMAGENTA << "\tcat:" << RESET << std::endl;
		else
			std::cout << BOLDMAGENTA << "\tdog:" << RESET << std::endl;
		delete(animals[i]);
	}
	std::cout << std::endl;
}

void	main_deep_copy()
{
	sub_title("Constructor Dog sif");
	Dog *sif = new Dog();
	std::cout << std::endl;


	sub_title("Set ideas");
	std::cout << "\tSet idea 'Artorias' to index 0:" << std::endl;
	sif->setIdea(0, "Artorias");
	std::cout << std::endl;

	std::cout << "\tSet idea 'protect the grave' to index 1:" << std::endl;
	sif->setIdea(1, "protect the grave");
	std::cout << std::endl;

	std::cout << "\tSet idea 'big sword' to index 42:" << std::endl;
	sif->setIdea(42, "big sword");
	std::cout << std::endl;

	std::cout << "\tSet idea 'Abyss' to index 101:" << std::endl;
	sif->setIdea(101, "Abyss");
	std::cout << std::endl;


	sub_title("Constructor Dog poochi, copy of Dog sif");
	Dog *poochy = new Dog(*sif);
	std::cout << std::endl;

	sub_title("Testing if brain copy work");
	std::cout << "\tThe " << sif->getType() << " sif has the following ideas: " << std::endl;
	sif->getIdeas();
	std::cout << std::endl;

	std::cout << "\tThe " << poochy->getType() << " poochy has the following ideas: " << std::endl;
	poochy->getIdeas();
	std::cout << std::endl;

	sub_title("Destructors");
	std::cout << BOLDMAGENTA << "\tDog sif:" << RESET << std::endl;
	delete(sif);
	std::cout << BOLDMAGENTA << "\tDog poochy:" << RESET << std::endl;
	delete(poochy);
	std::cout << std::endl;
}

int	main()
{
	title("ARRAY OF ANIMALS");
	main_testing();

	title("DEEP COPY");
	main_deep_copy();

	// Animal animal; // This line must not compile

	return (0);
}
