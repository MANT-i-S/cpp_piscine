#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "FragTrap.hpp"
#include <iostream>
#include <time.h>

class ScavTrap {
public:
	int hp;
	int mhp;
	int ep;
	int mep;
	int lvl;
	std::string name;
	int MeleeDam;
	int RangedDam;
	int ArmorDam;

	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string const name);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};

#endif