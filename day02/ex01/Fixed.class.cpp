#include "Fixed.class.hpp"

const int Fixed::_fracbits = 8;

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << "\n";
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << "\n";
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << "\n";
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed::Fixed(const int i) : _value(i << _fracbits) {
	std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float f) : _value(roundf(f * pow(2, this->_fracbits))) {
	std::cout << "Float constructor called" << "\n";
}

float Fixed::toFloat( void ) const {
	return ((float)this->_value / pow(2, this->_fracbits));
}

int Fixed::toInt( void ) const {
	return (this->_value >> this->_fracbits);
}

std::ostream & operator<<(std::ostream & ofs, const Fixed & fixed) {
	ofs << fixed.toFloat();
	return (ofs);
}