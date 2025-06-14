#include "../Include/poly.hpp"



// Constructors
WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "\tWrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &src )
{
	std::cout << "\tWrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat::WrongCat( const std::string &type )
{
	_type = type;
	std::cout << "\tWrongCat constructor called with type " << _type << std::endl;
}



// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\tWrongCat destructor called" << std::endl;
}



// operator overload
WrongCat	&WrongCat::operator=( const WrongCat &src )
{
	std::cout << "\tWrongCat assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}



// Class member functions
void	WrongCat::makeSound() const
{
	std::cout << "\tThe " << _type << " say 'asdfgkasjdgfklasjdflkasdbncioSDJFSD'" << std::endl;
}
