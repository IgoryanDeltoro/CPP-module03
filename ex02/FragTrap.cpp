#include "FragTrap.hpp"

FragTrap::FragTrap(std::string &name) : ClapTrap(name) {
    std::cout << "FragTrap " << _name << " called the explicit comstructor.\n";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
};

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft) {
    std::cout << "FragTrap " << _name << " called the copy constructor.\n";
};

FragTrap &FragTrap::operator=(const FragTrap &ft) {
    if (this != &ft)
        ClapTrap::operator=(ft);
    std::cout << "FragTrap " << _name << " called the copy assignment operator.\n";
    return *this;
};

FragTrap::~FragTrap() {};

void highFivesGuys(void) {
    std::cout << "Bla bla bla\n";
};