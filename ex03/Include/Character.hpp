#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "Icharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		static int	_n_characters;
		
	public:
		// Constructors
		Character();
		Character( std::string name );
		Character( const Character &src );

		// Destructor
		~Character();

		// Operators overload
		Character &operator=( const Character &src );
		void swap( Character &first, Character &second );

		// Get
		std::string const	&getName() const;
		AMateria			*getInventory( int i ) const;

		// Set
		void	setName( const std::string &name );
		void	setInventory( int i, AMateria *materia );

		// Class member functions
		virtual void	equip( AMateria *materia );
		virtual void	equip_from_floor( int i );
		virtual void	unequip( int i );
		virtual void	use( int i, ICharacter &target );

		static AMateria	*_floor[50];
};

#endif