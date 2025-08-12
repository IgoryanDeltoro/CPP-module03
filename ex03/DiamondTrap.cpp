#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name), 
                                                    ScavTrap(name), 
                                                    FragTrap(name) {
    this->_name = name + "_clap_name";
    std::cout << "DiamondTrap " << this->_name << " called the parameterized constructor.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt) :   ClapTrap(dt._name),
                                                    ScavTrap(dt._name),
                                                    FragTrap(dt._name) {
    std::cout << "DiamondTrap " << this->_name << " called copy constructor.\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " was destroyed.\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt) {
    if (this != &dt)
    {
        ClapTrap::operator=(dt);
        ScavTrap::operator=(dt);
        FragTrap::operator=(dt);
    }
    std::cout << "DiamondTrap " << this->_name << " called asignment operator\n";
    return *this;
}
