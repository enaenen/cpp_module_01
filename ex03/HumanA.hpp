#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        const std::string name;
        Weapon& Weapon;

    public:
        HumanA();
        HumanA(const std::string& name, ::Weapon& Weapon);
        ~HumanA();
        void attack();
};