#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {
	return;
}

Human::~Human(void){
	return;
}

std::string Human::identify(void) const {
	std::string str;

	str += (this->b).identify();
	return (str);
}

const Brain &Human::getBrain(void) const {
	return (this->b);
 }