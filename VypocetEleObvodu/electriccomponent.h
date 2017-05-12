#ifndef ELECTRICCOMPONENT_H
#define ELECTRICCOMPONENT_H


class electriccomponent
{
public:
    electriccomponent();
    ElectricComponent(std::string ElectricComponentLine);
    std::string GetComponentCharacter(void);
    std::string GetComponentName(void);
    int			GetElectricWires1(void);
    int			GetElectricWires2(void);
    int			GetElectricWires3(void);
    int			GetElectricWires4(void);
    double		GetValue(void);
private:
    void		ConversionFromString(void);
    std::string ComponentCharacter;
    std::string	ComponentName;
    std::string	ElectricWiresStr1;
    std::string	ElectricWiresStr2;
    std::string	ElectricWiresStr3;
    std::string	ElectricWiresStr4;
    std::string	ValueStr;
    std::string	Operation;
    int			ElectricWires1;
    int			ElectricWires2;
    int			ElectricWires3;
    int			ElectricWires4;
    double		Value;
};
class UnexpectedExprsion : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Unexpected expresion";
    }
};
#endif // ELECTRICCOMPONENT_H
