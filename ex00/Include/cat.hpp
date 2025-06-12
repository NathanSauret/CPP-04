#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
	private:

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
};

#endif