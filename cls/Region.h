#pragma once
#include <string>

class Region {
    std::string name;
    double factor;
public:
    Region(std::string n, double f);
    std::string getName() const;
    double getFactor() const;
};
