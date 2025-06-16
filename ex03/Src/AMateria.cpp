#include "../Include/poly.hpp"



// Constructors
AMateria::AMateria()
{
	std::cout << "\tAMateria default constructor called" << std::endl;
}

AMateria::AMateria( const AMateria &src )
{
	std::cout << "\tAMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria( const std::string &type )
{
	std::cout << "\tAMateria constructor with type " << type << " called" << std::endl;
	this->_type = type;
}



// Destructor
AMateria::~AMateria()
{
	std::cout << "\tAMateria destructor called" << std::endl;
}



// Operators overload
AMateria	&AMateria::operator=( const AMateria &src )
{
	this->_type = src._type;
	return (*this);
}



// Get
std::string const	&AMateria::getType() const
{
	return ( this->_type );
}

Character	*AMateria::getWielder() const
{
	return (this->_wielder);
}

MateriaSource		*AMateria::getMateriaSource() const
{
	return (this->_materia_source);
}



// Set
void	AMateria::setType( const std::string &type )
{
	this->_type = type;
}

void	AMateria::setWielder( Character *wielder )
{
	this->_wielder = wielder;
}

void	AMateria::setMateriaSource( MateriaSource *materia_source )
{
	this->_materia_source = materia_source;
}