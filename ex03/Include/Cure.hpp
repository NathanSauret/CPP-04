#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Icharacter.hpp"

class Cure : public AMateria
{
	private:

	public:
		// Constructors
		Cure();
		Cure( const Cure &copy );

		// Destructor
		virtual ~Cure();

		// Operators overload
		Cure &operator=( const Cure &src );

		// Class member functions
		virtual AMateria	*clone() const;
		virtual void		use( ICharacter &target );
};

#endif