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
Brain	&Brain::operator=( const Brain &src )
{
	std::cout << "\tBrain assignation operator called" << std::endl;
	std::copy(src._ideas, src._ideas + 100, _ideas);
	return (*this);
}



// Get
std::string	Brain::getIdea( int const &index ) const
{
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	std::cout << RED << "\tThere is only 100 ideas per brain, please enter an index 0-99" << RED << std::endl;
	return (NULL);
}



// Set
void	Brain::setIdea( std::string const &idea, int const &index )
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	std::cout << RED << "\tThere is only 100 ideas per brain, please enter an index 0-99" << RESET << std::endl;
}
