#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : name("default name"), hit(10), energy(10), attack_damage(0) {
  std::cout << "ClapTrap " << name << " is alive and well" << std::endl;
}
ClapTrap::ClapTrap(std::string const &name)
    : name(name), hit(10), energy(10), attack_damage(0) {
  std::cout << "ClapTrap " << name << " is alive and well" << std::endl;
}
ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name << " died" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) { *this = src; }
ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
  name = src.name;
  hit = src.hit;
  attack_damage = src.attack_damage;
  energy = src.energy;
  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (energy <= 0 || hit <= 0)
    return;
  energy--;
  std::cout << "ClapTrap " << name << " attacks " << target << " causing "
            << attack_damage << " points of damage !" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
  hit -= amount;
  std::cout << "ClapTrap " << name << " takes " << amount << " of damage"
            << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
  if (energy <= 0 || hit <= 0)
    return;
  hit += amount;
  energy--;
  std::cout << "ClapTrap " << name << " gets repaired by " << amount
            << " amount" << std::endl;
}
