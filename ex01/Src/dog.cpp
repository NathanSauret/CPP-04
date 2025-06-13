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



// Get
std::string	Dog::getIdea( int const &index ) const
{
	if (index >= 0 && index < 100)
		return (_brain->getIdea(index));
	std::cout << "There is only 100 ideas per brain, please enter an index 0-99" << std::endl;
	return (NULL);
}

Brain		&Dog::getBrain(void) const
{
	return (*this->_brain);
}


// Set
void	Dog::setIdea( std::string const &idea, int const &index )
{
	if (index >= 0 && index < 100)
		_brain->setIdea(idea, index);
	std::cout << "There is only 100 ideas per brain, please enter an index 0-99" << std::endl;
}