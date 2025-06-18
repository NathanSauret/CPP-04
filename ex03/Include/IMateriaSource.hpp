#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	private:

	public:
		// Constructors
		IMateriaSource(void);
		IMateriaSource(IMateriaSource const &copy);
		
		// Destructor
		virtual ~IMateriaSource() {}

		// Operators overload
		IMateriaSource const	&operator=(IMateriaSource const &copy);

		// Class member functions
		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif