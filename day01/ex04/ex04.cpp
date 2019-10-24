#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr;
	std::string &ref = str;

	ptr = &str;
	std::cout << "String -> " << str << "\n";
	std::cout << "Pointer -> " << *ptr << "\n";
	std::cout << "Reference -> " << ref << "\n";
	return(0);
}