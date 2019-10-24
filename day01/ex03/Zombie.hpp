#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP

#include <array>
#include <iostream>
#include <string>

class Zombie{
	public:

	Zombie(void);
	~Zombie(void);
	std::string name;
	std::string type;
	void announce(void) const;
	
};

#endif