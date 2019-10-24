#include "Pony.hpp"

Pony::Pony(void){
	return;
}

Pony::~Pony(void){
	return;
}

std::string Pony::getColor(void) const{
	return (this->_color);
}

void Pony::setColor(std::string str){
	this->_color = str;
}

int Pony::getSpeed(void){
	return (this->_speed);
}

void Pony::setSpeed(int speed){
	this->_speed = speed;
}