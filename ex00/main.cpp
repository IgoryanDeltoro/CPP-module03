#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("Antonio");

    c.attack("Sergio");
    c.takeDamage(3);
    c.beRepaired(2);
    c.attack("Margarito");
    c.takeDamage(8);
    c.beRepaired(2);
    c.attack("Chapalito");

    return 0;
}