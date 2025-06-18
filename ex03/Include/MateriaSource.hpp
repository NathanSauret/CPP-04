#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_memory[4];

	public:
		// Constructors
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);

		// Destructor
		~MateriaSource(void);

		// Operators overload
		MateriaSource const	&operator=(MateriaSource const &copy);

		// Class member functions
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria*	createMateria(std::string const &type);
		int 				inLearnInventory(AMateria *materia);
};

#endif