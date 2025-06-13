#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		// Constructors
		WrongAnimal();
		WrongAnimal( const WrongAnimal &src );
		WrongAnimal( const std::string &type );

		// Destructor
		~WrongAnimal();

		// Operation overload
		WrongAnimal	&operator=( const WrongAnimal &src );

		// Get
		std::string	getType( void ) const;

		// Set
		void	setType( const std::string &type );

		// Class member functions
		void	makeSound( void ) const;
};

#endif