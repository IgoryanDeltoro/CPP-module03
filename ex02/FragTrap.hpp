#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap(std::string &name);
        FragTrap(const FragTrap &ft);
        FragTrap& operator=(const FragTrap &ft);
        ~FragTrap();

        void highFivesGuys(void);
};