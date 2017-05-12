#include "electriccomponentlist.h"
using namespace std;

ElectricComponentList::ElectricComponentList(string filePath)
{
    ifstream ElectricalCircuitFile(filePath);
    string lineContents;
    while (!ElectricalCircuitFile.eof())
    {
        getline(ElectricalCircuitFile,lineContents);

        ElectricComponent EC(lineContents);
        ElectricComponents.push_back(EC);
    }
    ElectricalCircuitFile.close();
    for each (ElectricComponent var in ElectricComponentList::ElectricComponents)
    {

    }
}
ElectricComponent ElectricComponentList::GetSource()
{
    if (ElectricComponents.size() == 0)
        throw NoComponents();
    return ElectricComponents.at(0);
}

