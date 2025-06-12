#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
	private:

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
};

#endif