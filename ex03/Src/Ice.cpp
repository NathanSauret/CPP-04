#include "../Include/poly.hpp"



// Constructors
Ice::Ice(void) : AMateria("ice")
{
	std::cout << "\tIce default constructor called" << std::endl;
}

Ice::Ice(Ice const &copy): AMateria(copy)
{
	std::cout << "\tIce copy constructor called" << std::endl;
}



// Destructor
Ice::~Ice()
{
	std::cout << "\tIce destructor called" << std::endl;
}



// Operators overload
Ice	&Ice::operator=( const Ice &src )
{
	std::cout << "\tAssigning operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}



// Class member functions
AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use( ICharacter &target )
{
	std::cout << "\t* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
