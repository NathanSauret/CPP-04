#include "../Include/poly.hpp"



// Constructors
Cure::Cure()
{
	std::cout << "\tCure default constructor called" << std::endl;
	this->_type = "Cure";
}

Cure::Cure( const Cure &src )
{
	std::cout << "\tCure copy constructor called" << std::endl;
	this->_type = "Cure";
}



// Destructor
Cure::~Cure()
{
	std::cout << "\tCure destructor called" << std::endl;
}



// Operators overload
Cure	&Cure::operator=( const Cure &src )
{
	std::cout << "\tAssigning operator called" << std::endl;
	this->_type = src._type;
}



// Class member functions
AMateria *Cure::clone() const
{
	AMateria *temp = new Cure(*this);
	temp->setWielder(NULL);
	temp->setMateriaSource(NULL);
	return (temp);
}

void	use( ICharacter &target )
{
	std::cout << "\t* heals "<< target.getName() << "'s wounds *" << std::endl;
}
