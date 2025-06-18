#include "../Include/poly.hpp"



// Constructors
MateriaSource::MateriaSource()
{
	std::cout << "\tMateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &src ) :  IMateriaSource(src), _memory()
{
	for (int i = 0; i < 4; i++)
	{
		if (src._memory[i])
			this->_memory[i] = src._memory[i];
	}
	std::cout << "\tMateriaSource copy constructor called" << std::endl;
}



// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i])
			delete this->_memory[i];
	}
	std::cout << "\tMateriaSource destructor called" << std::endl;
}



// Operators overload
MateriaSource const	&MateriaSource::operator=(const MateriaSource &src)
{
	(void)src;
	return (*this);
}



// Class member function
void	MateriaSource::learnMateria( AMateria *materia )
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && this->_memory[i] == NULL)
		{
			if (this->inLearnInventory(materia))
				this->_memory[i] = materia;
			else
				this->_memory[i] = materia;
			std::cout << "\tMateria " << this->_memory[i]->getType() << " learned at index " << i << std::endl;
			return ;
		}
	}
	if (materia)
		std::cout << "\tCan't learn materia, is full" << std::endl;
	else
		std::cout << "\tCan't learn materia, invalid" << std::endl;
	if (!this->inLearnInventory(materia))
		delete materia;
}


AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] && this->_memory[i]->getType() == type)
			return (this->_memory[i]->clone());
	}
	std::cout << "\tCan't create materia, is invalid" << std::endl;
	return (0);
}

int	MateriaSource::inLearnInventory(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] == materia)
			return (1);
	}
	return (0);
}
