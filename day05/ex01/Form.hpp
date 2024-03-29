#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form{
		const std::string name;
		bool sign;
		const int gradeSign;
		const int gradeEx;
		Form();
	public:
		Form & operator=(const Form &rhs);
		Form(Form const &src);
		~Form();
		Form(std::string n, int gs, int ge);
		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeEx() const;

		void beSigned(const Bureaucrat &);

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &ofs, const Form &s);

#endif