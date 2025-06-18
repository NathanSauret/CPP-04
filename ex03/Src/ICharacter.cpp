#include "../Include/ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "\tICharacter object created with default constructor" << std::endl;
}

ICharacter::ICharacter(ICharacter const &copy)
{
	*this = copy;
	std::cout << "\tICharacter object copied" << std::endl;
}

ICharacter const	&ICharacter::operator=(ICharacter const &copy)
{
	(void)copy;
	std::cout << "\tICharacter Assignment Operator Called" << std::endl;
	return (*this);
}
