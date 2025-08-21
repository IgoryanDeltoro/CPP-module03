#ifndef DIAMODNTRAP_HPP
#define DIAMODNTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
    private:
        std::string _name;
    public:
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &dt);
        ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &dt);

        void whoAmI();
        void attack(const std::string &target);
};

#endif
