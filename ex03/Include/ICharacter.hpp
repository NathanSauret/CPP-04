#ifndef ICHARACTER_H
#define ICHARACTER_H

#include "AMateria.hpp"
#include <iostream>

class ICharacter
{
	private:

	public:
		// Constructors
		ICharacter(void);
		ICharacter(ICharacter const &copy);

		// Destructor
		virtual	~ICharacter() {}

		// Operators overload
		ICharacter const	&operator=(ICharacter const &src);

		// get
		virtual std::string const	&getName() const = 0;

		// Class member functions
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
};

#endif