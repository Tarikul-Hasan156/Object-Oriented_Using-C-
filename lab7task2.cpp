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
        X (int h,int w)
        {
            height=h;
            width=w;
        }
        void display()
        {
            cout<<height<<' '<<width<<endl;
        }
      friend  X operator + (X obj,int v);
      friend   X operator * (X obj,X obj1);
};
    X operator + (X obj,int v)
    {
        X one;
        one.height=obj.height+v;
        one.width=obj.width+v;
        return one;
    }
    X operator * (X obj,X obj1)
    {
        X one;
        one.height=obj.height*obj1.height;
        one.width=obj.width*obj1.width;
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
