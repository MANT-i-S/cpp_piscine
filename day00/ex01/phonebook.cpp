#include "Contacts.class.hpp"

Contacts::Contacts(void){
	return;
}

Contacts::~Contacts(void){
	return;
}

std::string Contacts::getFn(void) const{
	return (this->_fn);
}
std::string Contacts::getLn(void) const{
	return (this->_ln);
}
std::string Contacts::getNick(void) const{
	return (this->_nick);
}
std::string Contacts::getLogin(void) const{
	return (this->_login);
}
std::string Contacts::getAdress(void) const{
	return (this->_adress);
}
std::string Contacts::getEmail(void) const{
	return (this->_email);
}
std::string Contacts::getPhone(void) const{
	return (this->_phone);
}
std::string Contacts::getBday(void) const{
	return (this->_bday);
}
std::string Contacts::getMeal(void) const{
	return (this->_meal);
}
std::string Contacts::getColor(void) const{
	return (this->_color);
}
std::string Contacts::getSecret(void) const{
	return (this->_secret);
}

void Contacts::setFn(std::string str){
	this->_fn = str;
}
void Contacts::setLn(std::string str){
	this->_ln = str;
}
void Contacts::setNick(std::string str){
	this->_nick = str;
}
void Contacts::setLogin(std::string str){
	this->_login = str;
}
void Contacts::setAdress(std::string str){
	this->_adress = str;
}
void Contacts::setEmail(std::string str){
	this->_email = str;
}
void Contacts::setPhone(std::string str){
	this->_phone = str;
}
void Contacts::setBday(std::string str){
	this->_bday = str;
}
void Contacts::setMeal(std::string str){
	this->_meal = str;
}
void Contacts::setColor(std::string str){
	this->_color = str;
}
void Contacts::setSecret(std::string str){
	this->_secret = str;
}