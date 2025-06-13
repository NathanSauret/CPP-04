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

	if (str.length() + 8 + 3 + 2 >= 42)
		return ;

	title.append("        ~~~ " + str + " ");
	while (title.length() < 42)
		title.append("~");
	
	std::cout << CYAN << title << RESET << std::endl;
}

int	main(void)
{
	title("CONSTRUCTOR");
	sub_title("Cat constructor");
	sub_title("Dog constructor");

	return (0);
}
