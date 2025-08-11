#ifndef DIAMODNTRAP_HPP
#define DIAMODNTRAP_HPP

# include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap(const DiamondTrap &dt);
        ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &dt);
};

#endif
