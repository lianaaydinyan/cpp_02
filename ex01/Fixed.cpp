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

Fixed::Fixed(const int n)
{
    this->fix_point = n << this->fractional_bits;
}

Fixed::Fixed(const float n)
{
    this->fix_point = roundf( n * (1 << this->fractional_bits));
}


float Fixed::toFloat( void ) const
{
    return (float(this->fix_point) / (float) (1 << this->fractional_bits));
}


int Fixed::toInt( void ) const
{
    int int_part = this->fix_point >> this->fractional_bits;
    return (int_part);
}

std::ostream    &operator<<(std::ostream &os, Fixed const &fp)
{
    os << fp.toFloat();
    return os;
}