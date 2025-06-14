#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "wrong_animal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		// Constructors
		WrongCat();
		WrongCat( const WrongCat &src );
		WrongCat( const std::string &type );

		// Destructor
		~WrongCat();

		// Operation overload
		WrongCat	&operator=( const WrongCat &src );

		// Class member functions
		void	makeSound() const;
};

#endif