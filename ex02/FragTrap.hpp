#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
protected:
public:
  FragTrap();
  FragTrap(const std::string &);
  virtual ~FragTrap();
  FragTrap &operator=(FragTrap const &src);
  FragTrap(FragTrap const &src);
  void attack(const std::string &target);

  void highFivesGuys();
};

#endif // !SCAVTRAP_HPP
