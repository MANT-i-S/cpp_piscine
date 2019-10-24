#include "Zombie.hpp"

Zombie::Zombie(void) {
	return;
}

Zombie::~Zombie(void){
	return;
}

void Zombie::announce(void) const{
	std::cout << this->type << " - " << this->name << ": ";
	std::cout << "Braiiiiiiinnnssss..." << "\n";
}