#ifndef PONY_HPP
 #define PONY_HPP

#include <iostream>
#include <string>

class Pony{
	public:

	Pony();
	~Pony();

	void ponyOnTheHeap(std::string clr, int speed);
	void ponyOnTheStack(std::string clr, int speed);

	void setSpeed(int speed);
	int getSpeed(void);

	void setColor(std::string);
	std::string getColor(void) const;

	private:

	int _speed;
	std::string _color;

};

#endif