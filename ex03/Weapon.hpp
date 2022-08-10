#pragma once

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon();
        Weapon(const std::string& type);
        ~Weapon();
        void setType(const std::string& type); 
        const std::string& getType() const;
};