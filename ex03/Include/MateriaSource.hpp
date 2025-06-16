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
		MateriaSource();
		MateriaSource( const MateriaSource &src );

		// Destructor
		virtual ~MateriaSource();

		// Operators oveload
		MateriaSource	&operator=( MateriaSource src );
		void			swap( MateriaSource &first, MateriaSource &second );

		// Get
		AMateria	*getMemory( int i ) const;

		// Set
		void	setMemory( int i, AMateria *materia );

		// Functions
		virtual void		learnMateria( AMateria *materia );
		virtual AMateria	*createMateria( std::string const& type );
};

#endif