#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {}

ScavTrap::~ScavTrap() {}
ScavTrap::ScavTrap(ScavTrap const &src) { *this = src; }
ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}
