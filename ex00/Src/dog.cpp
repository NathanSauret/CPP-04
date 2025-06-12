#include "../Include/poly.hpp"



// Constructors
Dog::Dog()
{
	_type = "Dog";
	std::cout << "\tDog default constructor called" << std::endl;
}

Dog::Dog( const Dog &src )
{
	std::cout << "\tDog copy constructor called" << std::endl;
	*this = src;
}

Dog::Dog( const std::string &type )
{
	_type = type;
	std::cout << "\tDog constructor called with type " << _type << std::endl;
}



// Destructor
Dog::~Dog()
{
	std::cout << "\tDog destructor called" << std::endl;
}



// operator overload
Dog	&Dog::operator=( const Dog &src )
{
	std::cout << "\tDog assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}



// Class member functions
void	Dog::makeSound() const
{
	std::cout << "\tThe " << _type << " say 'woof!'" << std::endl;
}
