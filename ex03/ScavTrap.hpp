#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &st);
    ScavTrap &operator=(const ScavTrap &st);
    ~ScavTrap();

    void guardGate();
    void attack(const std::string &target);
};
