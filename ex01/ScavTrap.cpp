#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "Scavtrap " << name << " initialized" << std::endl;
}

ScavTrap::~ScavTrap() {}
ScavTrap::ScavTrap(ScavTrap const &src) { *this = src; }
ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}
