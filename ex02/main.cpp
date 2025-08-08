#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n============ The derived class ScavTrap was created! ===============\n";
    std::cout << "============ The explicit constructor! ===============\n\n";

    ScavTrap a("Arnold");
    a.attack("Antonio");
    a.takeDamage(3);
    a.beRepaired(2);
    a.guardGate();

    std::cout << "\n============ The copy constructor! ===============\n\n";

    ScavTrap b(a);
    b.attack("Mario");
    b.takeDamage(3);
    b.beRepaired(2);

    std::cout << "\n============ The copy asignment operator! ===============\n\n";

    ScavTrap c("Rodrigo");
    c = a;
    c.attack("Mario");
    c.takeDamage(3);
    c.beRepaired(2);

    std::cout << "\n============ The derived class FragTrap was created! ===============\n";
    std::cout << "============ The explicit constructor! ===============\n\n";

    ScavTrap d("Hulio");
    d.attack("Ant");
    d.takeDamage(3);
    d.beRepaired(2);

    std::cout << "\n============ The copy constructor! ===============\n\n";

    ScavTrap f(d);
    f.attack("Marinesko");
    f.takeDamage(3);
    f.beRepaired(2);

    std::cout << "\n============ The copy asignment operator! ===============\n\n";

    ScavTrap e("Rodjer");
    e = d;
    e.attack("Ballo");
    e.takeDamage(3);
    e.beRepaired(2);

    return 0;
}