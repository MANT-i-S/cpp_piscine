#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main () {
	ShrubberyCreationForm s("EmptyField");
	std::cout << s;
	Bureaucrat a("First", 140);
	std::cout << a;
	a.executeForm(s);
	a.signForm(&s);
	a.executeForm(s);
	Bureaucrat b("Second", 4);
	b.executeForm(s);

	RobotomyRequestForm c("Third");
	std::cout << c;
	Bureaucrat d("Fourth", 70);
	std::cout << d;
	d.signForm(&c);
	d.executeForm(c);
	std::cout << b;
	b.executeForm(c);

	PresidentialPardonForm e("Last");
	b.signForm(&e);
	std::cout << e;
	b.executeForm(e);
	return 0;
}