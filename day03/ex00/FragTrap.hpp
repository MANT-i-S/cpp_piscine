#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <time.h>

class FragTrap{

public:
	int hp;
	int maxhp;
	int ep;
	int maxep;
	int lvl;
	std::string name;
	int MeleeDmg;
	int RangedDmg;
	int Armor;

	FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap(std::string const name);
	~FragTrap(void);

	FragTrap &operator=(FragTrap const &rhs);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int sum);
	void beRepaired(unsigned int sum);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif