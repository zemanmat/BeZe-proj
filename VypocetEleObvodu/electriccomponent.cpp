#include "electriccomponent.h"
#include <fstream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;


electriccomponent::electriccomponent()
{
    stringstream ElectricComponentStream(ElectricComponentLine);
        ElectricComponentStream >> ComponentName;
        if (ComponentName[0] == '.')		//Comand detected
        {

        }
        else if (ComponentName[0] == '%' && ComponentName[1] == '%')		//coment
        {
            ElectricComponentStream
        }
        else if (ComponentName[0] == 'R' || ComponentName[0] == 'L' || ComponentName[0] == 'C' ||
            ComponentName[0] == 'V' || ComponentName[0] == 'A' || ComponentName[0] == 'F' || ComponentName[0] == 'E')		// ElectricComponent
        {
            switch (ComponentName[0])	//Pripraveno pro trideni vsech soucastek zatim R,L,C,V,A maji stejny pocet vyvodu a zatim jednu hodnotu
            {
                case 'L':
                case 'C':
                case 'R':
                case 'A':
                case 'V':
                    ComponentCharacter = ComponentName[0];
                    ElectricComponentStream >> ElectricWiresStr1;
                    ElectricComponentStream >> ElectricWiresStr2;
                    ElectricComponentStream >> ValueStr;
                    ElectricWires1 = std::stoi(ElectricWiresStr1);
                    ElectricWires2 = std::stoi(ElectricWiresStr2);
                    break;
            default:
                break;
            }
        }
        else
        {
            throw UnexpectedExprsion();	//chyba cteni
        }
    }

    string ElectricComponent::GetComponentCharacter()		//Get Funkce pro dalsi zpracovani dat
    {
        return ComponentCharacter;
    }
    string ElectricComponent::GetComponentName()			//Get Funkce pro dalsi zpracovani dat
    {
        return ComponentName;
    }
    int ElectricComponent::GetElectricWires1()				//Get Funkce pro dalsi zpracovani dat
    {
        return ElectricWires1;
    }
    int ElectricComponent::GetElectricWires2()				//Get Funkce pro dalsi zpracovani dat
    {
        return ElectricWires2;
    }
    int ElectricComponent::GetElectricWires3()				//Get Funkce pro dalsi zpracovani dat
    {
        return ElectricWires2;
    }
    int ElectricComponent::GetElectricWires4()				//Get Funkce pro dalsi zpracovani dat
    {
        return ElectricWires2;
    }
    double ElectricComponent::GetValue()					//Get Funkce pro dalsi zpracovani dat
    {
        return Value;
    }

