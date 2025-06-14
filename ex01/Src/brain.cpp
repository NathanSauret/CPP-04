#include "../Include/poly.hpp"



// Constructors
Brain::Brain()
{
	std::cout << "\tBrain default constructor called" << std::endl;
}

Brain::Brain( const Brain &src )
{
	std::cout << "\tBrain copy constructor called" << std::endl;
	*this = src;
}




// Destroyer of worlds
Brain::~Brain()
{
	std::cout << "\tBrain destructor called" << std::endl;
}



// Operators overload
Brain &Brain::operator=( const Brain &src )
{
	std::cout << "\tBrain Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		if (src._ideas[i].length() > 0)
			this->_ideas[i].assign(src._ideas[i]);
	}
	return *this;
}



// Get
std::string	Brain::getIdea( int const &index ) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	std::cout << RED << "\tThere is only 100 ideas per brain, please enter an index 0-99" << RED << std::endl;
	return (NULL);
}



// Set
void	Brain::setIdea(size_t i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << RED << "\tThere is only 100 ideas per brain, please enter an index 0-99" << RESET << std::endl;
}