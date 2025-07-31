#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap " << _name << " called a default constructor\n";
    _name = "Anton";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}
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
    std::cout << "ScavTrap " << _name << " called the copy assignment operator constructor\n";
    if (this != &st)
    {
        ClapTrap::operator=(st);
        this->_name = st._name;
        this->_hitPoints = st._hitPoints;
        this->_energyPoints = st._energyPoints;
        this->_attackDamage = st._attackDamage;
    }
    return *this;
};
void ScavTrap::guardGate(){
    std::cout << " ScavTrap " << _name << " is now in Gate keeper mode\n";
}