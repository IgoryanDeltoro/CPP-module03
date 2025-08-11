#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n============ The derived class FragTrap was created! ===============\n";
    std::cout << "============ The explicit constructor! ===============\n\n";

    ScavTrap d("Hulio");
    d.attack("Ant");
    d.takeDamage(20);
    d.takeDamage(20);
    d.takeDamage(20);
    d.takeDamage(20);
    d.attack("Ant");

    d.beRepaired(2);

    std::cout << "\n============ The copy constructor! ===============\n\n";

    ScavTrap f(d);
    f.attack("Marinesko");
    f.takeDamage(3);
    f.takeDamage(25);
    f.attack("Marinesko");
    f.beRepaired(2);

    std::cout << "\n============ The copy asignment operator! ===============\n\n";

    ScavTrap e("Roger");
    e = d;
    e.attack("Baloo");
    e.takeDamage(3);
    e.beRepaired(2);

    return 0;
}