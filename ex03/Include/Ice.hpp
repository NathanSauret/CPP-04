#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Icharacter.hpp"

class Ice : public AMateria
{
	private:

	public:
		// Constructors
		Ice();
		Ice( const Ice &src );

		// Destructor
		virtual	~Ice();

		// Operators overload
		Ice &operator=( const Ice &src );

		// Class member functions
		virtual AMateria	*clone() const;
		virtual void		use( ICharacter &target );
};

#endif