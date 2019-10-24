#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP

#include <array>
#include <iostream>
#include <string>

class Zombie{
	public:

	Zombie(std::string nm, std::string tp);
	~Zombie(void);
	void announce(void) const;

	private:

	std::string _name;
	std::string _type;
	
};

#endif