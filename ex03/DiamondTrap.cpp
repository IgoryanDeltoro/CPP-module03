#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :    ClapTrap(),
                                ScavTrap(),
                                FragTrap(),
                                _name("Default_Diamond") {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << this->_name << " called the default constructor.\n";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
                                                    ScavTrap(name),
                                                    FragTrap(name),
                                                    _name(name) {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << this->_name << " called the parameterized constructor.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt) : ClapTrap(dt._name + "_clap_name"),
                                                  ScavTrap(dt._name),
                                                  FragTrap(dt._name),
                                                  _name(dt._name){
    std::cout << "DiamondTrap " << this->_name << " called copy constructor.\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " was destroyed.\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt) {
    if (this != &dt) {
        FragTrap::operator=(dt);
        ScavTrap::operator=(dt);
        this->_name = dt._name;
    }
    std::cout << "DiamondTrap " << this->_name << " called asignment operator\n";
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->_name;
    std::cout << " and my ClapTrap name is " << ClapTrap::_name << "\n";
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}