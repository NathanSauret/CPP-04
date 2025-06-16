#include "../Include/poly.hpp"



// Constructors
Ice::Ice()
{
	std::cout << "\tIce default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice( const Ice &src )
{
	std::cout << "\tIce copy constructor called" << std::endl;
	this->_type = "ice";
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
}



// Class member functions
AMateria *Ice::clone() const
{
	AMateria *temp = new Ice(*this);
	temp->setWielder(NULL);
	temp->setMateriaSource(NULL);
	return (temp);
}

void	use( ICharacter &target )
{
	std::cout << "\t* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
