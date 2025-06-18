#include "../Include/poly.hpp"



// Constructors
Character::Character(void): _name("no_name"), _inventory()
{
	std::cout << "\tCharacter default constructor called" << std::endl;
}

Character::Character(std::string const &name): _name(name), _inventory()
{
	std::cout << "\tCharacter constructor with name " << name << " called" << std::endl;
}

Character::Character(Character const &src): ICharacter(src), _inventory()
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i];
	}
	std::cout << "Character copy constructor called" << std::endl;
}



// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "\tCharacter destructor called" << std::endl;
}



// Operators overload
Character const	&Character::operator=(const Character &src)
{
	this->_name = src._name;
	return (*this);
}



// Get
std::string const	&Character::getName() const
{
	return (this->_name);
}



// Set
void	Character::setName( const std::string &name )
{
	this->_name = name;
}



// Class member functions
int Character::isInInventory(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == materia)
			return (1);
	}
	return (0);
}

void	Character::equip( AMateria *materia )
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && this->_inventory[i] == NULL)
		{
			if (this->isInInventory(materia))
				this->_inventory[i] = materia->clone();
			else
				this->_inventory[i] = materia;
			std::cout << "\tMateria " << this->_inventory[i]->getType() << " equipped to " << this->_name << "'s inventory at index " << i << std::endl;
			return ;
		}
	}
	if (materia)
		std::cout << "\tCan't equip materia, inventory full" << std::endl;
	else
		std::cout << "\tCan't equip materia, invalid" << std::endl;
	if (!this->isInInventory(materia))
		delete materia;
}

void	Character::unequip( int i )
{
	if (i >= 0 && i < 4 && this->_inventory[i])
	{
		std::cout << "\tMateria " << this->_inventory[i]->getType() << " unequiped from " << this->_name << "'s inventory at index " << i << std::endl;
		this->_inventory[i] = NULL;
	}
	else if (i < 0 || i >= 4)
		std::cout << "\tCan't unequip materia, index must be 0-3" << std::endl;
	else
		std::cout << "\tCan't unequip materia, is empty" << std::endl;
}

void	Character::use(int i, ICharacter &target)
{
	if (i >= 0 && i < 4 && this->_inventory[i])
		this->_inventory[i]->use(target);
	else if (i < 0 || i >= 4)
		std::cout << "\tCan't use materia, index must be 0-3" << std::endl;
	else
		std::cout << "\tCa't use materia, is empty!" << std::endl;
}
