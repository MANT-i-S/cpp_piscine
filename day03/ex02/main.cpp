#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	ClapTrap c;
	ScavTrap g("1Trap");
	FragTrap f("2Trap");
	FragTrap cf(f);
	ClapTrap n("NewTrap");
	g.challengeNewcomer("NewTrap");
	f.vaulthunter_dot_exe("NewTrap");
	n.takeDamage(20);
	n.beRepaired(30);
	f.meleeAttack("NewTrap");
	g.meleeAttack("NewTrap");
	return 0;
}