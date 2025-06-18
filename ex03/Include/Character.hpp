#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		// Constructors
		Character(void);
		Character(std::string const &name);
		Character(Character const &copy);

		// Destructor
		~Character(void);

		// Operators overload
		Character const	&operator=(Character const &copy);

		// Get
		std::string const	&getName(void) const;

		// Set
		void	setName(std::string const &name);

		// Class member functions
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);
		int 			isInInventory(AMateria *m);
};

#endif