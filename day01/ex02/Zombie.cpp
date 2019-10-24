#include "Zombie.hpp"

Zombie::Zombie(std::string nm, std::string tp) : _name(nm), _type(tp){
	return;
}

Zombie::~Zombie(void){
	return;
}

void Zombie::announce(void) const{
	std::cout << this->_type << " - " << this->_name << ": ";
	std::cout << "Braiiiiiiinnnssss..." << "\n";
}