#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		// Constructors
		Dog();
		Dog( const Dog &src );
		Dog( const std::string &type );

		// Destructor
		~Dog();

		// Operation overload
		Dog	&operator=( const Dog &src );

		// Class member functions
		void	makeSound() const;

		// Get
		std::string	getIdea( int const &index ) const;
		Brain		&getBrain(void) const;

		// Set
		void	setIdea( std::string const &idea, int const &index );
};

#endif