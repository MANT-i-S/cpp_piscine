#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed{

	int _value;
	static const int _fracbits;

	public:

	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &hrs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif