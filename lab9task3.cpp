
#include<bits/stdc++.h>
using namespace std;
class Flower
{
public:
    virtual void showitem()=0;

};
class Rose:public Flower
{
public:
    void showitem ()
    {
        cout<<"sells rose"<<endl;
    }
};
class Marigold:public Flower
{
public:
    void showitem ()
    {
        cout<<"sells marigold"<<endl;
    }
};
int main ()
{
    Flower *ptr;
    Rose r1;
    ptr=&r1;
    ptr->showitem();
    Marigold r2;
    ptr=&r2;
    ptr->showitem();
    return 0;
}
