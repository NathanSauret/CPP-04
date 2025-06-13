#include "../Include/poly.hpp"



// Constructors
WrongAnimal::WrongAnimal() : _type("no_type")
{
	std::cout << "\tWrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	std::cout << "\tWrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal( const std::string &type )
{
	_type = type;
	std::cout << "\tWrongAnimal constructor called with type " << _type << std::endl;
}



// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\tWrongAnimal destructor called" << std::endl;
}



// operator overload
WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &src )
{
	std::cout << "\tWrongAnimal assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}



// Get
std::string	WrongAnimal::getType() const
{
	return ( _type );
}



// Set
void	WrongAnimal::setType( const std::string &type )
{
	_type = type;
	std::cout << "\tWrongAnimal type set to " << _type << std::endl;
}



// Class member functions
void	WrongAnimal::makeSound() const
{
	std::cout << "\tThe " << _type << " try to communicate, and it works! What a strange animal..." << std::endl;
}
