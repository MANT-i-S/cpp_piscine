#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {}

ZombieEvent::~ZombieEvent(void){}

void ZombieEvent::setZombieType(std::string tp) {
	this->_ZombieType = tp;
}

Zombie *ZombieEvent::newZombie(std::string n) {
	Zombie *z = new Zombie(n, this->_ZombieType);
	return(z);
}

void ZombieEvent::randomChump(void) {
	char color[13][20] = {"Blue", "Red", "Orange", "Yellow", "Green", "Purple", "Brown", "Magenta", "Cyan", "Olive", "Maroon", "Navy", "Aquamarine"};
	int num = 0;
	std::string rdname;
	Zombie *z;

	srand(time(NULL));
	num = rand()%13;
	rdname = color[num];
	z = this->newZombie(rdname);
	z->announce();
	delete(z);
}