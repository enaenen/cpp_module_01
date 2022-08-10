#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        const std::string name;
        Weapon& weapon;

    public:
        HumanA();
        HumanA(const std::string& name, Weapon& weapon);
        ~HumanA();
        void attack();
};