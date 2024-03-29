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

	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;
	float operator+(Fixed const & rhs) const;
	float operator-(Fixed const & rhs) const;
	float operator*(Fixed const & rhs) const;
	float operator/(Fixed const & rhs) const;
	Fixed operator++(void);
	Fixed operator++(int n);
	Fixed operator--(void);
	Fixed operator--(int n);
	static Fixed &min(Fixed & f1, Fixed &f2);
	static Fixed &max(Fixed & f1, Fixed &f2);
	static Fixed const &min(Fixed const &f1, Fixed const &f2);
	static Fixed const &max(Fixed const &f1, Fixed const &f2);
};

std::ostream & operator<<(std::ostream &ofs, const Fixed &fixed);

#endif