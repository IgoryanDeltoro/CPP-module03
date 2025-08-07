#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "ScavTrap " << _name << " called an explicit constructor\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st) {
    std::cout << "ScavTrap " << _name << " called the copy constructor\n";
    *this = st;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &st) {
    if (this != &st)
        ClapTrap::operator=(st);
    std::cout << "ScavTrap " << _name << " called the copy assignment operator constructor\n";
    return *this;
};

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " was destroyed\n";
};

void ScavTrap::guardGate(){
    std::cout << " ScavTrap " << _name << " is now in Gate keeper mode\n";
}