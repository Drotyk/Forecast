#pragma once
#include <string>

class WeatherCondition {
    std::string description;
    double impact;
public:
    WeatherCondition(std::string d, double i);
    std::string getDescription() const;
    double getImpact() const;
};
