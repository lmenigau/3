#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {
private:
  std::string name;
  int hit;
  int energy;
  int attack_damage;

protected:
public:
  ClapTrap();
  virtual ~ClapTrap();
  ClapTrap &operator=(ClapTrap const &src);
  ClapTrap(ClapTrap const &src);

  ClapTrap(std::string const &name);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif // !CLAPTRAP_HPP
