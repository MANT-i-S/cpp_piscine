#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string t) : Form("RobotomyRequestForm", 72, 45){
	this->target = t;
	srand(time(NULL));
}

void RobotomyRequestForm::action(void) const{
	if (rand() % 2)
	{
		std::cout << this->target << " has been successfully robotomized.\n";
	}
	else
	{
		std::cout << "Robotomization of " << this->target << " has failed\n";
	}
}