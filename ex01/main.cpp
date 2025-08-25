#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n============ The derived class ScavTrap was created! ===============\n";

    std::cout << "============ The default constructor! ===============\n\n";

    ScavTrap s;
    s.attack("Nothing");
    s.takeDamage(3);
    s.beRepaired(2);
    s.guardGate();

    std::cout << "\n============ The parameterized  constructor! ===============\n\n";

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

    std::cout << "\n========== End of Tests ==========\n\n";
    return 0;
}