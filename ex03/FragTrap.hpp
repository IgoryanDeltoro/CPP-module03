#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
    public:
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &ft);
        FragTrap& operator=(const FragTrap &ft);
        ~FragTrap();

        void highFivesGuys(void);
        void attack(const std::string &target);
};