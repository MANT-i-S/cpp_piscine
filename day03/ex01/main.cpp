#include "ScavTrap.hpp"

int main(){
	ScavTrap a;
	ScavTrap b("ScavTrap2");
	ScavTrap c("ScavTrap3");
	ScavTrap d("ScavTrap4");
	a = c;
	a.meleeAttack("ScavTrap4");
	d.takeDamage(30);
	b.rangedAttack("ScavTrap4");
	d.takeDamage(20);
	d.beRepaired(50);
	b.challengeNewcomer("ScavTrap4");
	b.challengeNewcomer("ScavTrap4");
	b.challengeNewcomer("ScavTrap4");
	b.challengeNewcomer("ScavTrap4");
	b.challengeNewcomer("ScavTrap4");
	return 0;
}