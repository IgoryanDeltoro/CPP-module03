#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("Anton");

    c.attack("target_1");
    c.takeDamage(3);
    c.beRepaired(5);
    c.attack("target_2");
    c.takeDamage(8);
    c.beRepaired(2);
    c.attack("target_3");

    ClapTrap t("Bob");
    t.setAttackDamage(5);
    for (int i = 0; i < 10; i++)
    {
        t.attack("Sergio"); 
    }
    t.attack("Sergio");    
    t.beRepaired(10);       
    t.takeDamage(100);       
    t.attack("Sergio");       
    t.beRepaired(5);         

    return 0;
}