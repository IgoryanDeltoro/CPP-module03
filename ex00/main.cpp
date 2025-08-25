#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n============ The derived class ClapTrap was created! ===============\n";

    std::cout << "============ The default constructor! ===============\n\n";

    ClapTrap s;
    s.attack("Nothing");
    s.takeDamage(3);
    s.beRepaired(2);

    std::cout << "\n============ The parameterized  constructor! ===============\n\n";

    ClapTrap a("Arnold");
    a.attack("Antonio");
    a.takeDamage(3);
    a.beRepaired(2);

    std::cout << "\n============ The copy constractor! ===============\n\n";

    ClapTrap b(a);
    b.attack("Mario");
    b.takeDamage(3);
    b.beRepaired(2);

    std::cout << "\n============ The copy asignment operator! ===============\n\n";

    ClapTrap c("Rodrigo");
    c = a;
    c.attack("Mario");
    c.takeDamage(3);
    c.beRepaired(2);

    return 0;
}