#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"

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
		void				use( ICharacter &target );
};

#endif