#include "ScavTrap.hpp"
int main(void) {
    {
        ClapTrap c;
        ClapTrap clap("Clapie");
        ClapTrap clop = clap;

        clap.attack("Boss");
        clap.beRepaired(10);
        clap.takeDamage(10);
        clap.attack("Boss");
    }
    {
        ScavTrap c;
        ScavTrap clap("Clapie");
        ScavTrap clop = clap;

        clap.attack("Boss");
        clap.beRepaired(10);
        clap.takeDamage(10);
        clap.attack("Boss");
    }
}
