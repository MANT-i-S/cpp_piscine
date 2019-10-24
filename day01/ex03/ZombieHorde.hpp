#ifndef ZOMBIEHORDE_HPP
 #define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {

	public:

	ZombieHorde(int num);
	~ZombieHorde(void);
	void announce(void);

	private:

	int _num;
	Zombie *_horde;
};


#endif