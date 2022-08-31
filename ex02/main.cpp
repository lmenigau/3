#include "FragTrap.hpp"
int main(void) {
  // Fragtrap c;
  FragTrap clap("Scavie");
  // FragTrap clop = clap;

  clap.attack("Boss");
  clap.beRepaired(10);
  clap.takeDamage(10);
  clap.attack("Boss");
  clap.highFivesGuys();
}
