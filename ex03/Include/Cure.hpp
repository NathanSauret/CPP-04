#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		// Constructors
		Cure(void);
		Cure(Cure const &copy);

		// Destructor
		~Cure(void);

		// Operators overload
		Cure const	&operator=(Cure const &copy);

		// Class member functions
		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};

#endif