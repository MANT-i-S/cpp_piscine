#include "FragTrap.hpp"

int main(){
	FragTrap a;
	FragTrap b("FragTrap2");
	FragTrap c("FragTrap3");
	FragTrap d("FragTrap4");
	a = c;
	a.meleeAttack("FragTrap4");
	d.takeDamage(30);
	b.rangedAttack("FragTrap4");
	d.takeDamage(20);
	d.beRepaired(50);
	b.vaulthunter_dot_exe("FragTrap4");
	b.vaulthunter_dot_exe("FragTrap4");
	b.vaulthunter_dot_exe("FragTrap4");
	b.vaulthunter_dot_exe("FragTrap4");
	b.vaulthunter_dot_exe("FragTrap4");
	return 0;
}