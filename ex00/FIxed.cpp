#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fix_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fix_point = obj.fix_point;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj)
    {
        this->fix_point = obj.fix_point;
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fix_point);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fix_point = raw;
} 