#include<bits/stdc++.h>
using namespace std;
class X
{
private:
    int height,width;
public:
    X()
    {
        height=0;
        width=0;
    }
    X (int height,int width)
    {
        this->height=height;
        this->width=width;
    }
    void display()
    {
        cout<<height<<" "<<width<<endl;
    }
  friend  X operator + (X obj,int val);
   friend X operator * (X obj1,X obj2);
};
X operator + (X obj,int val)
{
    X one;
    one.height=obj.height+val;
    one.width=obj.width+val;
    return one;
}
X operator * (X obj1,X obj2)
{
    X one;
    one.height=obj1.height*obj2.height;
    one.width=obj1.width*obj2.width;
    return one;
}
int main ()
{
    X r1;
    X r2 (10,20);
    X r3 (30,40);
    r1=(r2+2)*r3;
    r1.display();

    return 0;
}
