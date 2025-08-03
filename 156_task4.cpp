#include<iostream>
using namespace std;

class Shape
{
private:
    int side1,side2;
public:
    void set_h(int s1,int s2)
    {
        side1=s1;

        side2=s2;
    }
    void get_h()
    {
        cout<<side1<<" "<<side2<<endl;
    }

    void area()
    {
        cout<<2*((side1+side2)/2)<<endl;
    }
    void perimeter()
    {
        cout<<2*(side1+side2)<<endl;
    }



};
int main  ()
{


    Shape r1,r2;
    r1.set_h(10,20);
    r1.get_h();

    r1.area();
    r1.perimeter ();
    r2.set_h(30,40);
    r2.get_h();
    r2.area();
    r2.perimeter();
    return 0;

}

