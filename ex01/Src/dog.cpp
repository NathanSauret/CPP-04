#include "../Include/poly.hpp"



// Constructors
Dog::Dog() : Animal()
{
	std::cout << "\tDog default constructor called" << std::endl;
	_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog &src ) : Animal()
{
	std::cout << "\tDog copy constructor called" << std::endl;
	*this = src;
}

Dog::Dog( const std::string &type ) : Animal()
{
	std::cout << "\tDog constructor called with type " << _type << std::endl;
	_type = type;
	this->_brain = new Brain();
}



// Destructor
Dog::~Dog()
{
	std::cout << "\tDog destructor called" << std::endl;
	delete this->_brain;
}



// operator overload
Dog &Dog::operator=(const Dog &src)
{
	std::cout << "\tDog Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	this->_brain = new Brain();
	*this->_brain = *src._brain;
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
		return (this->_brain->getIdea(index));
	std::cout << RED << "There is only 100 ideas per brain, please enter an index 0-99" << RESET << std::endl;
	return (NULL);
}

void	Dog::getIdeas( void ) const
{
	for (int i = 0; i < 100; i++)
	{
		if (!this->_brain->getIdea(i).empty())
			std::cout << "\t\t" << i << ": " << this->_brain->getIdea(i) << std::endl;
	}
		
}

Brain		&Dog::getBrain(void) const
{
	return (*this->_brain);
}


// Set
void	Dog::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}
