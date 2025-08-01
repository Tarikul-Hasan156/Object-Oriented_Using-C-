#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
private:
    string brand,model;
public:
    Vehicle()
    {
        brand='\0';
        model='\0';
    }
    Vehicle (string brand,string model)
    {
        this->brand=brand;
        this->model=model;
    }
    void displayvehicle ()
    {
        cout<<brand<<' '<<model<<endl;
    }

};
class ElectricDevice
{
private:
    int voltage,power;
public:
    ElectricDevice()
    {

        voltage=0;
        power=0;
    }
    ElectricDevice(int voltage,int power)

    {
        this->voltage=voltage;
        this->power=power;
    }
    void showdevice()
    {
        cout<<voltage<<" "<<power<<endl;
    }

};
class electriccar:public Vehicle,public ElectricDevice
{
public:
    electriccar(string brand,string model,int voltage,int power):Vehicle(brand,model),ElectricDevice(voltage,power)
    {

    }
    void displayDetails()
    {
        displayvehicle();
        showdevice();

    }
};
int main ()
{
    electriccar r1 ("tesla","m3",520,60);
    r1.displayDetails();
    return 0;
}
