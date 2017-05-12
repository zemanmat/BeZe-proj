#ifndef ELECTRICCOMPONENTLIST_H
#define ELECTRICCOMPONENTLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "ElectricComponent.h"
#include <fstream>
#include <algorithm>
#include <exception>

class ElectricComponentList
{
public:
    ElectricComponentList(std::string filePath);
    ElectricComponent GetSource();
    std::vector<ElectricComponent> GetMatrixDimension();
private:
    std::vector<ElectricComponent> ElectricComponents;
};
class NoComponents : public std::exception
{
public:
    const char *what() const throw()
    {
        return "ElectricalCircuit: No valid Components";
    }
};

#endif // ELECTRICCOMPONENTLIST_H
