#include "DiamondTrap.hpp"

void attack(ClapTrap *ct) {
    ct->attack("PolyTarget");
    ct->takeDamage(50);
    ct->beRepaired(25);
}

void attack_without_pointer(ClapTrap ct)
{
    ct.attack("PolyTarget");
    ct.takeDamage(50);
    ct.beRepaired(25);
}

int main()
{
    std::cout << "\n========== DiamondTrap Basic Test ==========\n\n";
    DiamondTrap dt("Shiny");
    dt.attack("TargetD");
    dt.takeDamage(42);
    dt.beRepaired(10);
    dt.whoAmI();

    std::cout << "\n========== Copy Constructor Test ==========\n\n";
    DiamondTrap copy(dt);
    copy.attack("CopyTarget");
    copy.whoAmI();

    std::cout << "\n========== Assignment Operator Test ==========\n\n";
    DiamondTrap assign("Temporary");
    assign = dt;
    assign.attack("AssignTarget");
    assign.whoAmI();

    std::cout << "\n========== Multiple Actions ==========\n\n";
    DiamondTrap hero("Hero");
    hero.attack("Monster1");
    hero.takeDamage(30);
    hero.beRepaired(20);
    hero.attack("Monster2");
    hero.whoAmI();

    std::cout << "\n========== Polymorphism Test ==========\n\n";
    ClapTrap *poly = new DiamondTrap("Poly");
    poly->attack("PolyTarget"); 
    poly->takeDamage(50);
    poly->beRepaired(25);
    attack(poly);
    delete poly;

    std::cout << "\n========== Polymorphism Test with slicing ==========\n\n";
    DiamondTrap p("Poly");
    p.attack("PolyTarget");
    p.takeDamage(50);
    p.beRepaired(25);
    attack_without_pointer(p);

    std::cout << "\n========== End of Tests ==========\n\n";
    return 0;
}
