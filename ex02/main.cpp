#include "FragTrap.hpp"

int main()
{
    std::cout << "\n============ The derived class FragTrap was created! ===============\n";

    std::cout << "============ The default constructor! ===============\n\n";

    FragTrap s;
    s.attack("Nothing");
    s.takeDamage(3);
    s.beRepaired(2);
    s.highFivesGuys();

    std::cout << "\n============ The parameterized  constructor! ===============\n\n";

    FragTrap a("Arnold");
    a.attack("Antonio");
    a.takeDamage(3);
    a.beRepaired(2);
    a.highFivesGuys();

    std::cout << "\n============ The copy constructor! ===============\n\n";

    FragTrap b(a);
    b.attack("Mario");
    b.takeDamage(3);
    b.beRepaired(2);
    b.highFivesGuys();

    std::cout << "\n============ The copy asignment operator! ===============\n\n";

    FragTrap c("Rodrigo");
    c = a;
    c.attack("Mario");
    c.takeDamage(3);
    c.beRepaired(2);
    c.highFivesGuys();

    std::cout << "\n========== End of Tests ==========\n\n";
    return 0;
}