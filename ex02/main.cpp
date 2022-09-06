#include "FragTrap.hpp"
int main(void) {
  // Fragtrap c;
  FragTrap frag("Fragie");
  // FragTrap clop = clap;

  frag.attack("Boss");
  frag.beRepaired(10);
  frag.takeDamage(10);
  frag.attack("Boss");
  frag.highFivesGuys();
}
