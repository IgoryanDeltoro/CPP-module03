#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap was calling a default constructor" << std::endl;
};

ClapTrap::ClapTrap(const std::string &name) :   _name(name),
                                                _hitPoints(10),
                                                _energyPoints(10),
                                                _attackDamage(0) {
    std::cout << "ClapTrap was calling a default constructor" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &ct) :    _name(ct._name),
                                            _hitPoints(ct._hitPoints),
                                            _energyPoints(ct._energyPoints), 
                                            _attackDamage(ct._attackDamage) {
    std::cout << "ClapTrap was calling the copy constructor" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &ct) {
    std::cout << "ClapTrap was calling the copy assignment operator" << std::endl;
    if (this != &ct)
    {
        this->_name = ct._name;
        this->_hitPoints = ct._hitPoints;
        this->_energyPoints = ct._energyPoints;
        this->_attackDamage = ct._attackDamage;
    }
    return *this;
}
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " was destroyed."<< std::endl;
}

void ClapTrap::setAttackDamage(int amount)
{
    if (amount >= 0)
        _attackDamage = amount;
}
void ClapTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks ";
        std::cout << target << ", cousing " << _attackDamage;
        std::cout << " points of damage!" << std::endl;
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