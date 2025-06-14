#include "../Include/poly.hpp"



// Constructors
Animal::Animal() : _type("no_type")
{
	std::cout << "\tAnimal default constructor called" << std::endl;
}

Animal::Animal( const Animal &src )
{
	std::cout << "\tAnimal copy constructor called" << std::endl;
	*this = src;
}

Animal::Animal( const std::string &type )
{
	_type = type;
	std::cout << "\tAnimal constructor called with type " << _type << std::endl;
}



// Destructor
Animal::~Animal()
{
	std::cout << "\tAnimal destructor called" << std::endl;
}



// operator overload
Animal	&Animal::operator=( const Animal &src )
{
	std::cout << "\tAnimal assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}



// Get
std::string	Animal::getType() const
{
	return ( _type );
}


// Set
void	Animal::setType( const std::string &type )
{
	_type = type;
	std::cout << "\tAnimal type set to " << _type << std::endl;
}



// Class member functions
void	Animal::makeSound() const
{
	std::cout << "\tThe " << _type << " try to communicate, but can't..." << std::endl;
}
