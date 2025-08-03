#include<bits/stdc++.h>
using namespace std;
class Animal
{

public:
    virtual void makesound()=0;
};
class Dog:public Animal
{
public:
    void makesound()
    {
         cout<<"bark"<<endl;
    }

};
class Cat:public Animal
{
public:
    void makesound()
    {
        cout<<"meow"<<endl;
    }
};
int main ()
{
    Cat a;
    Dog b;
    Animal *ptr;
    ptr=&a;


    ptr->makesound();
    ptr=&b;
    ptr->makesound();

    return 0;
}
