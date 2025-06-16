#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "Character.hpp"
#include "MateriaSource.hpp"

// class Character;
// class ICharacter;
// class MateriaSource;
// class IMateriaSource;

class AMateria
{
	protected:
		std::string		_type;
		Character		*_wielder;
		MateriaSource	*_materia_source;
		bool			_is_on_floor;

	public:
		// Constructors
		AMateria();
		AMateria( const AMateria &src );
		AMateria( std::string const & type );

		// Destructor
		~AMateria();

		// Operators overloard
		AMateria &operator=( const AMateria &src );

		// Get
		std::string const	&getType() const; //Returns the materia type
		Character			*getWielder() const;
		MateriaSource		*getMateriaSource() const;

		// Set
		void	setType( const std::string &type );
		void	setWielder( Character *wielder );
		void	setMateriaSource( MateriaSource *materia_source );

		// Class member functions
		virtual AMateria*	clone() const = 0;
		virtual void		use( ICharacter &target );
};

#endif