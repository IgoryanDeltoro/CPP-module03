#include "FragTrap.hpp"

FragTrap::FragTrap() :   ClapTrap() {
    std::cout << "FragTrap " << _name << " called the default constructor\n";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "FragTrap " << _name << " called the parameterized comstructor.\n";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft) {
    std::cout << "FragTrap " << _name << " called the copy constructor.\n";
}

FragTrap &FragTrap::operator=(const FragTrap &ft) {
    if (this != &ft)
        ClapTrap::operator=(ft);
    std::cout << "FragTrap " << _name << " called the copy assignment operator.\n";
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " was destroyed.\n";
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " requests a positive high-five!\n";
}

void FragTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " attacks ";
        std::cout << target << ", causing " << _attackDamage;
        std::cout << " points of damage!\n";
    } else {
        std::cout << "FragTrap " << _name;
        std::cout << " has no energy or is dead and cannot attack.\n";
    }
}