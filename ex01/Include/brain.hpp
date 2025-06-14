#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		// Constructors
		Brain();
		Brain( const Brain &src );

		// Destructor
		virtual	~Brain();

		// Operators overload
		Brain	&operator=( const Brain& src );

		// Get
		std::string	getIdea( int const &index ) const;

		// Set
		void	setIdea(size_t i, std::string idea);
};

#endif