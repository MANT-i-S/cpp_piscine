#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num) {
	std::string rdname;
	int c = 0;
	char color[13][20] = {"Blue", "Red", "Orange", "Yellow", "Green", "Purple", "Brown", "Magenta", "Cyan", "Olive", "Maroon", "Navy", "Aquamarine"};
	int i = 0;
	
	srand(time(NULL));
	i = rand()%13;
	rdname = color[i];
	this->_num = num;
	this->_horde = new Zombie[num];
	srand(time(NULL));
	while (c < num){
		this->_horde[c].name = rdname;
		this->_horde[c].type = "Horde";
		c++;
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete[] this->_horde;
}

void ZombieHorde::announce(void) {
	Zombie *z;
	int i = 0;

	z = this->_horde;
	while (i < this->_num)
	{
		z[i].announce();
		i++;
	}
}