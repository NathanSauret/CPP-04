#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:

	public:
		// Constructors
		Ice(void);
		Ice(Ice const &copy);

		// Destructors
		~Ice(void);

		// Operators overload
		Ice const	&operator=(Ice const &copy);

		// Class member functions
		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};

#endif