#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fix_point;
        static const int fractional_bits = 8;
    public:
        Fixed(); // default construcor
        Fixed(const int n); // int to fixed
        Fixed(const float n);// ffloat to fixed
        float toFloat( void ) const; // fixed to float 
        int toInt( void ) const; // fixed to int
        friend std::ostream    &operator<<(std::ostream &os, Fixed const &fp);
        ~Fixed(); // defaoult destrucotr
        Fixed(const Fixed& obj); // copy constructor
        Fixed& operator=(const Fixed& obj); // copy assinment operator
        int     getRawBits( void ) const; // getter
        void    setRawBits( int const raw); // setter
};

#endif