#include <iostream>
#include <string>
#include <locale>

int main(int ac, char **av)
{
	int j = 1;
	std::locale loc;
	if(ac > 1)
	{
		while(j < ac)
		{
			std::string str = av[j];
			for (std::string::size_type i=0; i<str.length(); ++i)
    			std::cout << std::toupper(av[j][i],loc);
			j++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return(0);
}
