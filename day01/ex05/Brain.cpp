#include "Brain.hpp"

Brain::Brain(void) {
	return;
}

Brain::~Brain(void){
	return;
}

std::string Brain::identify(void) const {
	std::ostringstream of;
	std::string str;

	of << std::hex << this;
	str = of.str();
	return (str);
}
