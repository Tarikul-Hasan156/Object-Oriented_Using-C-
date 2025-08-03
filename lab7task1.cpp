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
    Complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        if (imaginary>1)
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        else
            cout<<real<<imaginary<<"i"<<endl;
    }
  friend  Complex operator + (Complex obj1,Complex obj2);
  friend   Complex operator - (Complex obj1,Complex obj2);
    friend  Complex operator * (Complex obj1,Complex obj2);

     void operator ++ ()
    {
       ++real;
    }
     void operator -- (int)
    {
       imaginary--;
    }

};
 Complex operator + (Complex obj1,Complex obj2)//r2 r3
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
        one.real=obj1.real*obj2.real-obj1.imaginary*obj2.imaginary;
        one.imaginary=obj1.real*obj2.imaginary+obj1.imaginary*obj2.real;
        return one;
    }

int main ()
{
    Complex r1,r4,r5;
    Complex r2(2,3);
    Complex r3(3,4);
    r1=r2+r3;
    r4=r2-r3;
    r5=r2*r3;
    r5.display();
    r1.display();
    r4.display();
    ++r1;
    r1.display();
     r5--;
     r5.display();



    return 0;
}
