#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		// Constructors
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);

		// Destructor
		virtual ~AMateria(void);

		// Operators oveload
		AMateria const	&operator=(AMateria const &copy);

		// Set
		std::string const	&getType(void) const;

		// Class member functions
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) = 0;
};

#endif