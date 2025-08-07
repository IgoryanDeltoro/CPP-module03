#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) :   _name(name),
                                                _hitPoints(10),
                                                _energyPoints(10),
                                                _attackDamage(0) {
    std::cout << "The explicit constructor was called.\n";
}

ClapTrap::ClapTrap(const ClapTrap &ct) :    _name(ct._name),
                                            _hitPoints(ct._hitPoints),
                                            _energyPoints(ct._energyPoints), 
                                            _attackDamage(ct._attackDamage) {
    std::cout << "The copy constructor was called.\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct) {
    std::cout << "The copy assignment operator was called\n";
    if (this != &ct)
    {
        _name = ct._name;
        _hitPoints = ct._hitPoints;
        _energyPoints = ct._energyPoints;
        _attackDamage = ct._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " was destroyed.\n";
}

void ClapTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks ";
        std::cout << target << ", cousing " << _attackDamage;
        std::cout << " points of damage!\n";
    }
    else 
    {
        std::cout << "ClapTrap " << _name;
        std::cout << " has no energy or is dead and cannot attack.\n";
    }
};
void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount;
    std::cout << " points of damage! Remaining HP: " << _hitPoints;
    std::cout << std::endl;
};
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout   << "ClapTrap repaired his health for ";
        std::cout << amount << " points! Remaining HP: ";
        std::cout << _hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " cannot repair itself ";
        std::cout << "(dead or out of energy)." << std::endl;
    };
}