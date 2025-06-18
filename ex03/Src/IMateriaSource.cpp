#include "../Include/IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << "\tIMateriaSource default constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &src)
{
	*this = src;
	std::cout << "\tIMateriaSource copy constructor called" << std::endl;
}

IMateriaSource const	&IMateriaSource::operator=(IMateriaSource const &src)
{
	(void)src;
	std::cout << "\tIMateriaSource Assignment Operator Called" << std::endl;
	return (*this);
}
