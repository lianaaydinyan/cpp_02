#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fix_point;
        static const int fractional_bits = 8;
    public:
        Fixed(); // default construcor
        ~Fixed(); // defaoult destrucotr
        Fixed(const Fixed& obj); // copy constructor
        Fixed& operator=(const Fixed& obj); // copy assinment operator
        int     getRawBits( void ) const; // getter
        void    setRawBits( int const raw); // setter
};

#endif