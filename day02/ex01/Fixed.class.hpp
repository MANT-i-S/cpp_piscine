#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed{

	int _value;
	static const int _fracbits;

	public:

	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &src);

	Fixed(const int i);
	Fixed(const float f);

	Fixed &operator=(Fixed const &hrs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream & ofs, const Fixed & fixed);

#endif