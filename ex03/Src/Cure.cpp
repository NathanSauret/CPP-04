#include "../Include/poly.hpp"



// Constructors
Cure::Cure() : AMateria("cure")
{
	std::cout << "\tCure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src): AMateria(src)
{
	std::cout << "\tCure copy constructor called" << std::endl;
}



// Destructor
Cure::~Cure()
{
	std::cout << "\tCure destructor called" << std::endl;
}



// Operators overload
Cure const	&Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}



// Class member functions
AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use( ICharacter &target )
{
	std::cout << "\t* heals "<< target.getName() << "'s wounds *" << std::endl;
}
