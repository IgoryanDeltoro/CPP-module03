#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n============ The explicit constractor! ===============\n\n";

    ClapTrap a("Antonio");

    a.attack("Sergio");
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