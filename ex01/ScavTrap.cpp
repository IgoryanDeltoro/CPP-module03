#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap was calling a default constructor" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name);

void ScavTrap::guardGate(){
    std::cout << "guardGate\n";
}