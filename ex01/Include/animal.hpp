#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "brain.hpp"

class Animal
{
	protected:
		std::string _type;

	public:
		// Constructors
		Animal();
		Animal( const Animal &src );
		Animal( const std::string &type );

		// Destructor
		virtual ~Animal();

		// Operation overload
		Animal	&operator=( const Animal &src );

		// Get
		std::string	getType( void ) const;
		virtual Brain		&getBrain(void) const = 0;

		// Set
		void	setType( const std::string &type );

		// Class member functions
		virtual void	makeSound( void ) const;
};

#endif