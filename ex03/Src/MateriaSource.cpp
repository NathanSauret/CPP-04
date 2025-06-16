#include "../Include/poly.hpp"



// Constructors
MateriaSource::MateriaSource()
{
	std::cout << "\tMateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &src )
{
	std::cout << "\tMateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if ( src._memory[i] )
		{
			this->_memory[i] = src._memory[i]->clone();
			this->_memory[i]->setMateriaSource(this);
		}
		else
		{
			this->_memory[i] = NULL;
		}
	}
}



// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i])
			delete this->_memory[i];
	}
}



// Operators overload
MateriaSource	&MateriaSource::operator=( MateriaSource src )
{
	MateriaSource::swap(*this, src);
	return (*this);
}

void MateriaSource::swap(MateriaSource &first, MateriaSource &second)
{
	std::swap(first._memory, second._memory);
}



// Get
AMateria	*MateriaSource::getMemory( int i ) const
{
	if (i >= 0 && i < 3)
		return (this->_memory[i]);
	return (NULL);
}



// Set
void	MateriaSource::setMemory( int i, AMateria *materia )
{
	if (i >= 0 && i < 3)
		this->_memory[i] = materia;
}



// Class member function
void	MateriaSource::learnMateria( AMateria *materia ) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] == NULL)
		{
			this->_memory[i] = materia;
			materia->setMateriaSource(this);
			std::cout << "\tMateria source learned " << materia->getType() << "!" << std::endl;
			return ;
		}
	}
	std::cout << "\tCan't learn " << materia->getType() << ", materia source is full." << std::endl;
}


AMateria	*MateriaSource::createMateria( std::string const &type ) {
	for (int i = 3; i >= 0; i--)
	{
		if (this->_memory[i] && this->_memory[i]->getType() == type)
		{
			std::cout << "\tMateria source creates " << type << std::endl;
			return (this->_memory[i]->clone());
		}
	}
	std::cout << "\tMateria source can't create " << type << std::endl;
	return (NULL);
}
