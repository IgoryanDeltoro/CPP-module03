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
    a.takeDamage(3);
    a.beRepaired(2);

    std::cout << "\n============ The copy asignment operator! ===============\n\n";

    ClapTrap c("Rodrigo");
    c = a;
    b.attack("Mario");
    a.takeDamage(3);
    a.beRepaired(2);

    return 0;
}