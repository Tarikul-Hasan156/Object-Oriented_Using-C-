#include<bits/stdc++.h>
using namespace std;
class Shape
{
private:
    double side1,side2;
public:
    Shape ()
    {
        side1=0;
        side2=0;
    }
    Shape (double s1,double s2)
    {
        side1=s1;
        side2=s2;
    }
   virtual void display_area()=0;

};
class Triangle :public Shape
{
private :
    int height ,base;
public:
    Triangle ()
    {
        height=0;
        base =0;
    }
    Triangle (int h,int b)
    {
        height=h;
        base=b;
    }
    void display_area()
    {

        cout<<0.5*height*base<<endl;
    }
};
class Rectangle :public Shape
{
private:
    int length,width;
public:
    Rectanle ()
    {

        length=0;
        width=0;
    }
    Rectangle (int l,int w)
    {
        length=l;
        width=w;
    }
    void display_area()
    {
        cout<<length*width<<endl;
    }
};
int main ()
{
    //Shape r1;
    Shape *ptr;
   // ptr=&r1;
    //ptr->display_area();
    Triangle r2(10,20);
    ptr=&r2;
    ptr->display_area();
    Rectangle r3 (30,40);
    ptr=&r3;
    ptr->display_area();
    return 0;
}
