#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
private:
    string brand;
    string model;

public:
    Vehicle()
    {
        brand = "";
        model = "";
    }

    Vehicle(string b, string m)
    {
        brand = b;
        model = m;
    }

    void display()
    {
        cout <<"Brand: " << brand << ", Model: " << model << endl;
    }
};

class ElectricDevice
{
private:
    int voltage;
    int power;

public:
    ElectricDevice()
    {
        voltage=0;
        power=0;
    }

    ElectricDevice(int v,int p)
    {
        voltage= v;
        power=p;
    }

    void display1()
    {
        cout<<"Voltage:" <<voltage <<"V, Power Consumption: "<<power <<"W"<<endl;
    }
};

class ElectricCar:public Vehicle, public ElectricDevice
{
public:
    ElectricCar(string b,string m,int v,int p) :Vehicle(b, m),ElectricDevice(v, p)
     {



     }

    void show()
    {
        cout<<"Electric Car Details:"<<endl;
        display();
        display1();
        cout <<endl;
    }
};

int main()
{
    ElectricCar r1("Tesla","M3",400,60);

    r1.show();

    return 0;
}
