#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.getName()), grade(src.getGrade()){
	return;
}

Bureaucrat::~Bureaucrat(){
	return;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs){
	this->grade = rhs.grade;
	return *this;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n){
	if (g < 1)
		throw GradeTooHighException();
	else if (g > 150)
		throw GradeTooLowException();
	this->grade = g;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void Bureaucrat::incGrade(){
	this->grade -= 1;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decGrade() {
	this->grade += 1;
	if (this->grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
		return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
		return ("Grade is too low");
}

std::ostream & operator<<(std::ostream &ofs, const Bureaucrat &s){
	ofs << s.getName() << ", bureaucrat grade " << s.getGrade() << std::endl;
	return (ofs);
}