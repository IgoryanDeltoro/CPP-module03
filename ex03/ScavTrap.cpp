#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "ScavTrap " << _name << " called the parameterized constructor.\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st) {
    std::cout << "ScavTrap " << _name << " called the copy constructor.\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st) {
    if (this != &st)
        ClapTrap::operator=(st);
    std::cout << "ScavTrap " << _name << " called the copy assignment operator.\n";
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " was destroyed.\n";
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode.\n";
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks ";
        std::cout << target << ", causing " << _attackDamage;
        std::cout << " points of damage!\n";
    }
    else
    {
        std::cout << "ScavTrap " << _name;
        std::cout << " has no energy or is dead and cannot attack.\n";
    }
}