#ifndef BRAIN_HPP
 #define BRAIN_HPP

#include <array>
#include <iostream>
#include <string>
#include <sstream>

class Brain{
	public:

	Brain(void);
	~Brain(void);
	std::string identify(void) const;
	int size;
};

#endif