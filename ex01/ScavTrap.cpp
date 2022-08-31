#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "Scavtrap " << name << " initialized" << std::endl;
  this->hit = 100;
  this->energy = 50;
  this->attack_damage = 50;
}

ScavTrap::~ScavTrap() {}
ScavTrap::ScavTrap(ScavTrap const &src) { *this = src; }
ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}

void ScavTrap::guardGate(void) {
  std::cout << "Scavtrap " << name << "has entered Guard mode";
}
