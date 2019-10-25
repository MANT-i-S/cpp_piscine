#include <iostream>
#include "Integer.class.cpp"

int main(){
	Integer x(30);
	Integer y(10);
	Integer z(0);

	std::cout << "Value of x : " << x << "\n";
	std::cout << "Value of y : " << y << "\n";
	y = Integer(12);
	std::cout << "Value of y : " << y << "\n";

	std::cout << "Value of z : " << z << "\n";
	z = x + y;
	std::cout << "Value of z : " << z << "\n";
}