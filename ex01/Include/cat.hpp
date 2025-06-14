#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		// Constructors
		Cat();
		Cat( const Cat &src );
		Cat( const std::string &type );

		// Destructor
		~Cat();

		// Operation overload
		Cat	&operator=( const Cat &src );

		// Class member functions
		void	makeSound() const;

		// Get
		std::string	getIdea( int const &index ) const;
		void		getIdeas( void ) const;
		Brain		&getBrain(void) const;

		// Set
		void	setIdea(size_t i, std::string idea);
};

#endif