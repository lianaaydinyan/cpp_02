#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fix_point = 0;
    std::cout << "Default construcor" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default denstrucor" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    this->fix_point = obj.fix_point;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    if (this != &obj)
    {
        this->fix_point = obj.fix_point;
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "Getter " << std::endl;
    return (this->fix_point);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "Setter " <<std::endl;
    this->fix_point = raw;
} 