#include "ClapTrap.hpp"
int main(void) {
  ClapTrap c;
  ClapTrap clap("name");

  clap.attack("target");
  clap.beRepaired(10);
  clap.takeDamage(10);
  clap.attack("target");
}
