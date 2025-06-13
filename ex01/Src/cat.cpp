#include "../Include/poly.hpp"



// Constructors
Cat::Cat()
{
	_type = "Cat";
	std::cout << "\tCat default constructor called" << std::endl;
}

Cat::Cat( const Cat &src )
{
	std::cout << "\tCat copy constructor called" << std::endl;
	*this = src;
}

Cat::Cat( const std::string &type )
{
	_type = type;
	std::cout << "\tCat constructor called with type " << _type << std::endl;
}



// Destructor
Cat::~Cat()
{
	std::cout << "\tCat destructor called" << std::endl;
}



// operator overload
Cat	&Cat::operator=( const Cat &src )
{
	std::cout << "\tCat assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}



// Class member functions
void	Cat::makeSound() const
{
	std::cout << "\tThe " << _type << " say 'human, I need food'" << std::endl;
}



// Get
std::string	Cat::getIdea( int const &index ) const
{
	if (index >= 0 && index < 100)
		return (_brain->getIdea(index));
	std::cout << "There is only 100 ideas per brain, please enter an index 0-99" << std::endl;
	return (NULL);
}



// Set
void	Cat::setIdea( std::string const &idea, int const &index )
{
	if (index >= 0 && index < 100)
		_brain->setIdea(idea, index);
	std::cout << "There is only 100 ideas per brain, please enter an index 0-99" << std::endl;
}