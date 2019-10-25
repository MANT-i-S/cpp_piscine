#include "Fixed.class.hpp"

const int Fixed::_fracbits = 8;

Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << "\n";
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << "\n";
	*this = src;
}

Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout << "Assignation operator called" << "\n";
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const{
	return (this->_value);
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}

Fixed::Fixed(const int i) : _value(i << _fracbits){
	std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float f) : _value(roundf(f * pow(2, this->_fracbits))){
	std::cout << "Float constructor called" << "\n";
}

float Fixed::toFloat( void ) const{
	return ((float)this->_value / pow(2, this->_fracbits));
}

int Fixed::toInt( void ) const{
	return (this->_value >> this->_fracbits);
}

bool Fixed::operator>(Fixed const &rhs) const{
	return (this->toFloat() > rhs.toFloat() ? true : false);
	}

bool Fixed::operator<(Fixed const &rhs) const{
	return (this->toFloat() < rhs.toFloat() ? true : false);
	}

bool Fixed::operator>=(Fixed const &rhs) const{
	return (this->toFloat() >= rhs.toFloat() ? true : false);
	}

bool Fixed::operator<=(Fixed const &rhs) const{
	return (this->toFloat() <= rhs.toFloat() ? true : false);
	}

bool Fixed::operator==(Fixed const &rhs) const{
	return (this->toFloat() == rhs.toFloat() ? true : false);
	}

bool Fixed::operator!=(Fixed const &rhs) const{
	return (this->toFloat() != rhs.toFloat() ? true : false);
	}

float Fixed::operator+(Fixed const &rhs) const{
	return (this->toFloat() + rhs.toFloat());
	}

float Fixed::operator-(Fixed const &rhs) const{
	return (this->toFloat() - rhs.toFloat());
	}

float Fixed::operator*(Fixed const &rhs) const{
	return (this->toFloat() * rhs.toFloat());
	}

float Fixed::operator/(Fixed const &rhs) const{
	return (this->toFloat() / rhs.toFloat());
	}

Fixed Fixed::operator++(void){
	this->_value++;
	return (*this);
	}

Fixed Fixed::operator++(int n){
	Fixed tmp;

	(void)n;
	tmp = Fixed(this->toFloat());
	this->_value++;
	return (tmp);
	}

Fixed Fixed::operator--(void){
	this->_value--;
	return (*this);
	}

Fixed Fixed::operator--(int n){
	Fixed tmp;

	(void)n;
	tmp = Fixed(this->toFloat());
	this->_value--;
	return (tmp);
	}

Fixed &Fixed::min(Fixed & f1, Fixed & f2){
	if (f1 <= f2)
		return (f1);
	return (f2);
	}

Fixed &Fixed::max(Fixed & f1, Fixed & f2){
	if (f1 >= f2)
		return (f1);
	return (f2);
	}

const Fixed &Fixed::min(Fixed const & f1, Fixed const & f2){
	if (f1 <= f2)
		return (f1);
	return (f2);
	}

const Fixed &Fixed::max(Fixed const & f1, Fixed const & f2){
	if (f1 >= f2)
		return (f1);
	return (f2);
	}

std::ostream & operator<<(std::ostream & ofs, const Fixed & fixed){
	ofs << fixed.toFloat();
	return (ofs);
}