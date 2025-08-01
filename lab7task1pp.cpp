#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real,imaginary;
public:
    Complex()
    {
        real=0;
        imaginary=0;
    }
    Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    void display()
    {
        if (imaginary>=0)
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        else
            cout<<real<<imaginary<<"i"<<endl;
    }
    void operator ++ ()
    {
        real++;
    }
    void operator -- ( int )
    {
        imaginary--;
    }
  friend  Complex operator + (Complex obj1,Complex obj2);
   friend Complex operator - (Complex obj1,Complex obj2);
   friend Complex operator * (Complex obj1,Complex obj2);
};
Complex operator + (Complex obj1,Complex obj2)
{
    Complex one;
    one.real=obj1.real+obj2.real;
    one.imaginary=obj1.imaginary+obj2.imaginary;
    return one;
}
Complex operator - (Complex obj1,Complex obj2)
{
    Complex one;
    one.real=obj1.real-obj2.real;
    one.imaginary=obj1.imaginary-obj2.imaginary;
    return one;
}
Complex operator * (Complex obj1,Complex obj2)
{
    Complex one;
    one.real=(obj1.real*obj2.real)-(obj1.imaginary*obj2.imaginary);
    one.imaginary=(obj1.imaginary*obj2.real)+(obj1.real*obj2.imaginary);
    return one;
}
int main ()
{
    Complex r1;
    Complex r2(2,3);
    Complex r3(3,4);
    r1=r2+r3;
    r1.display();
    r1=r2-r3;
    r1.display();
    r1=r2*r3;
    r1.display();
    r2.display();
    ++r2;
    r2.display();
    r3.display();
    r3--;
     r3.display();

    return 0;
}
