#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(100), mhp(100), ep(100), mep(100), lvl(1), name("ClapTrap"),
	MeleeDam(30), RangedDam(20), ArmorDam(5){
	srand(time(NULL));
	std::cout << this->name << " is a new ClapTrap\n";
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	srand(time(NULL));
	*this = src;
	std::cout << this->name << " is a copy of ClapTrap\n";
}

ClapTrap::ClapTrap(std::string const name) : hp(100), mhp(100), ep(100), mep(100), lvl(1),
	name(name), MeleeDam(30), RangedDam(20), ArmorDam(5){
	srand(time(NULL));
	std::cout << this->name << " is created\n";
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " is deactivated\n";
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	std::string old;

	old = this->name;
	if (this != &rhs) {
		this->hp = rhs.hp;
		this->mhp = rhs.mhp;
		this->ep = rhs.ep;
		this->mep = rhs.mep;
		this->lvl = rhs.lvl;
		this->name = rhs.name;
		this->MeleeDam = rhs.MeleeDam;
		this->RangedDam = rhs.RangedDam;
		this->ArmorDam = rhs.ArmorDam;
	}
	std::cout << "An identical copy of " << this->name << " has replaced " << old << std::endl;
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((unsigned int)this->ArmorDam <= amount)
		amount -= (unsigned int)this->ArmorDam;
	else
		amount = 0;
	if ((unsigned int)this->hp >= amount)
		this->hp -= amount;
	else
		this->hp = 0;
	std::cout << "<" << this->name << "> took a damage, current hp is " << this->hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((unsigned int)this->hp + amount <= (unsigned int)this->mhp)
		this->hp += amount;
	else
		this->hp = this->mhp;
	std::cout << "<" << this->name << "> have drank some engine oil, current hp is " << this->hp << std::endl;
}