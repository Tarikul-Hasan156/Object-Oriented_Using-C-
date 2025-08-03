#include<iostream>
using namespace std;
class KKFC
{
private:
    string fooditem[5];
    int x=0;
public :
    void Choosefood(string t,string c,string b)

    {
        fooditem[0]=t;
        fooditem[1]=c;
        fooditem[2]=b;

            x=3;


    }


    void Choosefood(string t,string c,string b,string p)


    {
        fooditem[0]=t;
        fooditem[1]=c;
        fooditem[2]=b;
        fooditem[3]=p;
        x=4;
    }


    void Choosefood(string t,string c,string b,string p,string s)

    {
        fooditem[0]=t;
        fooditem[1]=c;
        fooditem[2]=b;
        fooditem[3]=p;
        fooditem[4]=s;

    x=5;

    }
    int i;
    void display ()
    {
        for (i=0;i<x;i++)
    {
       cout<<fooditem[i]<<" "<<endl;
    }

    }


};

int main ()
{
    KKFC b1,b2,b3;
    b1.Choosefood("tea","coffe","yhamee");
        b2.Choosefood("tea","coffe","yhamee","hi");
                b3.Choosefood("tea","coffe","yhamee","hi","hlw");


    b1.display();

}
