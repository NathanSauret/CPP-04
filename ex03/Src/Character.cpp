#include "../Include/poly.hpp"



int			Character::_n_characters = 0;
AMateria	*Character::_floor[50] = {NULL};



// Constructors
Character::Character()
{
	std::cout << "\tCharacter default constructor called" << std::endl;
	this->_n_characters++;
	this->_name = "no_name";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character( std::string name ) {
	std::cout << "\tCharacter constructor with name " << name << " called" << std::endl;
	_n_characters++;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character( const Character &src )
{
	std::cout << "\tCharacter copy construtor called" << std::endl;
	_n_characters++;
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
		{
			this->_inventory[i] = src._inventory[i]->clone();
			this->_inventory[i]->setWielder(this);
		}
		else {	
			this->_inventory[i] = NULL;
		}
	}
}



// Destructor
Character::~Character()
{
	std::cout << "\tCharacter destructor called" << std::endl;
	_n_characters--;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	if (_n_characters == 0)
	{
		std::cout << "\tNo characters" << std::endl;
		for (int i = 0; i < 50; i++)
		{
			if (_floor[i])
			{
				delete _floor[i];
				_floor[i] = NULL;
			}
		}
	}
}



// Operators overload
Character	&Character::operator=( const Character &src )
{
	std::cout << "Character copy assignment operator called" << std::endl;
	Character tmp = Character(src);
	Character::swap(*this, tmp);
	return (*this);
}

void	Character::swap( Character &first, Character &second )
{
	std::swap(first._name, second._name);
	std::swap(first._inventory, second._inventory);
}



// Get
std::string const	&Character::getName() const
{
	return (this->_name);
}

AMateria	*Character::getInventory( int i ) const
{
	if ( i >= 0 && i < 3)
		return (this->_inventory[i]);
	return (NULL);
}



// Set
void	Character::setName( const std::string &name )
{
	this->_name = name;
}

void	Character::setInventory( int i, AMateria *materia )
{
	if ( i >= 0 && i < 3)
		this->_inventory[i] = materia;
}



// Class member functions
void	equip( AMateria *materia )
{
	
}