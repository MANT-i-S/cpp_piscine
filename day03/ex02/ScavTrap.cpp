#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : hp(100), mhp(100), ep(50), mep(50), lvl(1), name("ScavTrap"),
	MeleeDam(20), RangedDam(15), ArmorDam(3){
	srand(time(NULL));
	std::cout << this->name << "- Another construct\n";
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	srand(time(NULL));
	*this = src;
	std::cout << this->name << " One more\n";
}

ScavTrap::ScavTrap(std::string const name) : hp(100), mhp(100), ep(50), mep(50), lvl(1),
	name(name), MeleeDam(20), RangedDam(15), ArmorDam(3){
	srand(time(NULL));
	std::cout << this->name << ": Hello!\n";
}

ScavTrap::~ScavTrap() {
	std::cout << this->name << " is deactivated\n";
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	std::string old;

	old = this->name;
	if (this != &rhs) {
		this->hp = rhs.hp;
		this->mhp = rhs.mhp;
		this->ep = rhs.ep;
		this->lvl = rhs.lvl;
		this->name = rhs.name;
		this->MeleeDam = rhs.MeleeDam;
		this->RangedDam = rhs.RangedDam;
		this->ArmorDam = rhs.ArmorDam;
	}
	std::cout << "An identical copy of " << this->name << " has replaced " << old << std::endl;
	return (*this);
}

void ScavTrap::takeDamage(unsigned int amount) {
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

void ScavTrap::beRepaired(unsigned int amount) {
	if ((unsigned int)this->hp + amount <= (unsigned int)this->mhp)
		this->hp += amount;
	else
		this->hp = this->mhp;
	std::cout << "<" << this->name << "> have drank some engine oil, current hp is " << this->hp << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "<" << this->name << "> attacks <" << target << "> at range, causing " << this->RangedDam << " points of damage !\n";
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "<" << this->name << "> attacks <" << target << "> up close, causing " << this->MeleeDam << " points of damage !\n";
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	int r;

	r = rand() % 5;
	if (r == 0)
		std::cout << "<" << this->name << "> made <" << target << "> go do dishes\n";
	else if (r == 1)
		std::cout << "<" << this->name << "> made <" << target << "> go get some sleep\n";
	else if (r == 2)
		std::cout << "<" << this->name << "> made <" << target << "> do something else\n";
	else if (r == 3)
		std::cout << "<" << this->name << "> made <" << target << "> I have no clue what you sjuld do\n";
	else
		std::cout << "<" << this->name << "> made <" << target << "> ok there is last chalange\n";
}