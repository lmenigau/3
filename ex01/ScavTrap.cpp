#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() { std::cout << "Scavtrap " << name << " initialized\n"; }
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "Scavtrap " << name << " initialized\n";
  this->hit = 100;
  this->energy = 50;
  this->attack_damage = 20;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap " << name << " died\n"; }
ScavTrap::ScavTrap(ScavTrap const &src) { *this = src; }
ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
  ClapTrap::operator=(src);
  return *this;
}

void ScavTrap::attack(const std::string &target) {
  if (energy <= 0 || hit <= 0)
    return;
  energy--;
  std::cout << "ScavTrap " << name << " attacks " << target << " causing "
            << attack_damage << " points of damage !\n";
}
void ScavTrap::guardGate(void) {
  std::cout << "Scavtrap " << name << " has entered Guard mode\n";
}
