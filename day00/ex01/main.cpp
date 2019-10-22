#include "Contacts.class.hpp"

static void interact(Contacts person)
{
	std::string str;
	std::string cmd;
	std::cout << "Welcome to a crappy phonebook" << "\n";
	std::cout << "Use ADD/SEARCH/EXIT commands respectively" << "\n";
	std::cin >> cmd;
	if(cmd == "ADD")
	std::cout << "cmd is " << cmd << "\n";
	person.getAdress();
}

int main(void)
{
	int i = 0;
	Contacts person[8];
	while(42)
	{
		interact(person[i]);
	}
	return(0);
}