#ifndef CONTACTS_CLASS_HPP
 #define CONTACTS_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contacts{
	public:

	Contacts(void);
	~Contacts(void);
	std::string getFn(void) const;
	std::string getLn(void) const;
	std::string getNick(void) const;
	std::string getLogin(void) const;
	std::string getAdress(void) const;
	std::string getEmail(void) const;
	std::string getPhone(void) const;
	std::string getBday(void) const;
	std::string getMeal(void) const;
	std::string getColor(void) const;
	std::string getSecret(void) const;

	void setFn(std::string);
	void setLn(std::string);
	void setNick(std::string);
	void setLogin(std::string);
	void setAdress(std::string);
	void setEmail(std::string);
	void setPhone(std::string);
	void setBday(std::string);
	void setMeal(std::string);
	void setColor(std::string);
	void setSecret(std::string);

	private:

	std::string _fn;
	std::string _ln;
	std::string _nick;
	std::string _login;
	std::string _adress;
	std::string _email;
	std::string _phone;
	std::string _bday;
	std::string _meal;
	std::string _color;
	std::string _secret;
};

 #endif