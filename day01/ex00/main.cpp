#include "Pony.hpp"

void ponyOnTheHeap(std::string clr, int speed)
{
	Pony *heappony = new Pony();

	heappony->setSpeed(speed);
	heappony->setColor(clr);
	std::cout << "The " << heappony->getColor() << " pony on the heap, is running with speed "
	<< heappony->getSpeed() << " miles per hour." << "\n";
	delete heappony;
}

void ponyOnTheStack(std::string clr, int speed)
{
	Pony stackpony;

	stackpony.setSpeed(speed);
	stackpony.setColor(clr);
	std::cout << "And the " << stackpony.getColor() << " pony on the stack, is running with speed " 
	<< stackpony.getSpeed() << " miles per hour." << "\n";
}

int main(void)
{
	std::string color1;
	std::string color2;
	int speed1;
	int speed2;

	std::cout << "Hello user, and welcome to imaginary pony race (don't do drugs).\n\n";
	std::cout << "Imagine 2 ponys on track right now and please follow instructions below\n\n";
	std::cout << "What color is your first pony?\n";
	std::getline (std::cin, color1);
	std::cout << "What color is another one?\n";
	std::getline (std::cin, color2);
	std::cout << "Now you gonna perform as a speed radar. Excited aren't you?\n\n";
	std::cout << "What is a speed of the " << color1 << " pony?(mph)\n";
	std::cin >> speed1;
	std::cout << "And what is a speed of the " << color2 << " pony?(mph)\n";
	std::cin >> speed2;

	ponyOnTheHeap(color1, speed1);
	ponyOnTheStack(color2, speed2);
	if(speed2 > speed1)
		std::cout << "Obviously the " << color2 << " pony gonna win this race!\n";
	else if(speed2 == speed1)
		std::cout << "Probably the " << color2 << " pony gonna win this race!\n";
	else
		std::cout << "Obviously the " << color1 << " pony gonna win this race!\n";
	return(0);
}