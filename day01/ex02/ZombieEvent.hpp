#ifndef ZOMBIEEVENT_HPP
 #define ZOMBIEEVENT_HPP
	
	#include "Zombie.hpp"
	#include <iostream>
	#include <string>
	#include <array>
	#include <ctime>

	class ZombieEvent{

	public:

	ZombieEvent(void);
	~ZombieEvent(void);

	void setZombieType(std::string tp);
	Zombie *newZombie(std::string nm);
	void randomChump(void);

	private:

	std::string _ZombieType;

	};

#endif