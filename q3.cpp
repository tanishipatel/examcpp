#include <iostream>
#include <string>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:
   void setBrand(string b){
        brand=b;
   }

   void setPowerConsumption(int p){
        powerConsumption=p;
   }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
public:
    void displayLaptop()
    {
        cout << "Laptop Details" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() <<" W" << endl;
    }
};

class Smartphone: public Device
{
public:
    void displaySmartphone()
    {
        cout << "Smartphone Details" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << " W" << endl;
    }
};

int main()
{
    Laptop l1;
    Smartphone s1;

    l1.setBrand("Dell");
    l1.setPowerConsumption(65);

    s1.setBrand("Samsung");
    s1.setPowerConsumption(25);

    l1.displayLaptop();
    cout << endl;
    s1.displaySmartphone();

    return 0;
}