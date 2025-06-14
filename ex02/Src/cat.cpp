#include "../Include/poly.hpp"



// Constructors
Cat::Cat() : Animal()
{
	std::cout << "\tCat default constructor called" << std::endl;
	_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( const Cat &src ) : Animal()
{
	std::cout << "\tCat copy constructor called" << std::endl;
	*this = src;
	this->_brain = new Brain();
}

Cat::Cat( const std::string &type ) : Animal()
{
	_type = type;
	std::cout << "\tCat constructor called with type " << _type << std::endl;
}



// Destructor
Cat::~Cat()
{
	std::cout << "\tCat destructor called" << std::endl;
	delete this->_brain;
}



// operator overload
Cat &Cat::operator=(const Cat &src)
{
	std::cout << "\tCat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_type = src._type;
	this->_brain = new Brain();
	*this->_brain = *src._brain;
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
	std::cout << RED << "There is only 100 ideas per brain, please enter an index 0-99" << RESET << std::endl;
	return (NULL);
}

void	Cat::getIdeas( void ) const
{
	std::cout << "\tDog ideas:" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "\t\t" << i << ": " << _brain->getIdea(i) << std::endl;
}

Brain		&Cat::getBrain(void) const
{
	return (*this->_brain);
}



// Set
void	Cat::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}