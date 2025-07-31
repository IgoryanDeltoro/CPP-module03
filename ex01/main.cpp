#include "ScavTrap.hpp"

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

    std::cout << "\n+++++++++++++++++++++\n\n";

    ScavTrap a;
    ScavTrap b = a;

    a.attack("Sergio");
    a.takeDamage(3);
    a.beRepaired(2);
    a.attack("Margarito");
    a.takeDamage(8);
    a.beRepaired(2);
    a.attack("Chapalito");

    std::cout << "\n+++++++++++++++++++++\n\n";

    b.attack("Grigory");
    a.takeDamage(3);
    a.beRepaired(2);
    a.attack("Margarito");
    a.takeDamage(8);
    a.beRepaired(2);
    a.attack("Chapalito");

    return 0;
}