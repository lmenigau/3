#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
protected:
public:
  ScavTrap();
  ScavTrap(const std::string &);
  virtual ~ScavTrap();
  ScavTrap &operator=(ScavTrap const &src);
  ScavTrap(ScavTrap const &src);

  void guardGate();
};

#endif // !SCAVTRAP_HPP
