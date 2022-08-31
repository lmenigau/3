#include "ScavTrap.hpp"
int main(void) {
  ScavTrap c;
  ScavTrap clap("Scavie");
  ScavTrap clop = clap;

  clap.attack("Boss");
  clap.beRepaired(10);
  clap.takeDamage(10);
  clap.attack("Boss");
  clap.guardGate();
}
