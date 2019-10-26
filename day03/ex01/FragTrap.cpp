#include "FragTrap.hpp"

FragTrap::FragTrap() : hp(100), maxhp(100), ep(100), maxep(100), lvl(1), name("FragTrap"),
	MeleeDmg(30), RangedDmg(20), Armor(5){
	srand(time(NULL));
	std::cout << this->name << ": I am ready!\n";
}

FragTrap::FragTrap(FragTrap const &src) {
	srand(time(NULL));
	*this = src;
	std::cout << this->name << ": Check what I can\n";
}

FragTrap::FragTrap(std::string const name) : hp(100), maxhp(100), ep(100), maxep(100),
	lvl(1), name(name), MeleeDmg(30), RangedDmg(20), Armor(5){
	srand(time(NULL));
	std::cout << this->name << ": I am ready!\n";
}

FragTrap::~FragTrap() {
	std::cout << this->name << " is deactivated\n";
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::string old;

	old = this->name;
	if (this != &rhs) {
		this->hp = rhs.hp;
		this->maxhp = rhs.maxhp;
		this->ep = rhs.ep;
		this->lvl = rhs.lvl;
		this->name = rhs.name;
		this->MeleeDmg = rhs.MeleeDmg;
		this->RangedDmg = rhs.RangedDmg;
		this->Armor = rhs.Armor;
	}
	std::cout << "A new one just like " << this->name << " apeared from nowhere " << old << std::endl;
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "The <" << this->name << "> attacks <" << target
	<< "> at range, causing " << this->RangedDmg << " points of damage !\n";
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "The <" << this->name << "> attacks <" << target
	<< "> up close, causing " << this->MeleeDmg << " points of damage !\n";
}

void FragTrap::takeDamage(unsigned int amount) {
	if ((unsigned int)this->Armor <= amount)
		amount -= (unsigned int)this->Armor;
	else
		amount = 0;
	if ((unsigned int)this->hp >= amount)
		this->hp -= amount;
	else
		this->hp = 0;
	std::cout << "The <" << this->name << "> took a damage, current hp is " << this->hp << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if ((unsigned int)this->hp + amount <= (unsigned int)this->maxhp)
		this->hp += amount;
	else
		this->hp = this->maxhp;
	std::cout << "<" << this->name << "> have drank some engine oil, current hp is " << this->hp << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int r;

	r = rand() % 5;
	if (this->ep < 25)
		r = -1;
	else
		this->ep -= 25;
	switch (r)
	{
		case 0:
			std::cout << "<" << this->name << "> Shoot with hiden gun at <" << target << ">\n";
			break ;
		case 1:
			std::cout << "<" << this->name << "> Shoot from his leg at <" << target << ">\n";
			break ;
		case 2:
			std::cout << "<" << this->name << "> Shoot with a laser from his eye at <" << target << ">\n";
			break ;
		case 3:
			std::cout << "<" << this->name << "> threw a grenade at <" << target << ">\n";
			break ;
		case 4:
			std::cout << "<" << this->name << "> takes bazooka from nowhere and shoot at <" << target << ">\n";
			break ;
		default:
			std::cout << this->name << ": I am tired...\n";
	}
}