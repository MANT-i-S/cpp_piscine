#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
	Zombie *z1;
	Zombie *z2;
	Zombie *z3;
	Zombie z("Name", "Type");
	ZombieEvent event;

	event.setZombieType("Secondtype");
	z1 = event.newZombie("AnotherName");
	z1->announce();
	z.announce();
	event.setZombieType("Randometype");
	event.randomChump();
	event.setZombieType("Thirdtype");
	z2 = event.newZombie("Thirdname");
	z2->announce();
	delete(z1);
	delete(z2);
	event.setZombieType("Onemoretype");
	z3 = event.newZombie("Onemorename");
	z3->announce();
	delete(z3);
	return(0);
}