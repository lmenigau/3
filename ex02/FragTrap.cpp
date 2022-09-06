#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() { std::cout << "FragTrap " << name << " initialized\n"; }
FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "FragTrap " << name << " initialized\n";
  this->hit = 100;
  this->energy = 100;
  this->attack_damage = 30;
}

FragTrap::~FragTrap() { std::cout << "FragTrap " << name << " died\n"; }
FragTrap::FragTrap(FragTrap const &src) { *this = src; }
FragTrap &FragTrap::operator=(FragTrap const &src) {
  ClapTrap::operator=(src);
  return *this;
}

void FragTrap::attack(const std::string &target) {
  if (energy <= 0 || hit <= 0)
    return;
  energy--;
  std::cout << "FragTrap " << name << " attacks " << target << " causing "
            << attack_damage << " points of damage !\n";
}
void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << name << " has entered Guard mode\n";
}
