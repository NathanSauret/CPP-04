#include "../Include/poly.hpp"



// Constructors
AMateria::AMateria( const AMateria &src )
{
	std::cout << "\tAMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria( const std::string &type ) : _type(type)
{
	std::cout << "\tAMateria constructor with type " << type << " called" << std::endl;
}



// Destructor
AMateria::~AMateria()
{
	std::cout << "\tAMateria destructor called" << std::endl;
}



// Operators overload
AMateria const	&AMateria::operator=(AMateria const &src)
{
	std::cout << "\tAMateria assignment Operator Called" << std::endl;
	this->_type = src._type;
	return (*this);
}



// Get
std::string const	&AMateria::getType() const
{
	return ( this->_type );
}
