#ifndef HUMAN_HPP
 #define HUMAN_HPP

#include "Brain.hpp"
#include <array>
#include <iostream>
#include <string>

class Human{
	public:

	Brain const b;

	Human(void);
	~Human(void);
	const Brain &getBrain(void) const;
	std::string identify(void) const;

};

#endif