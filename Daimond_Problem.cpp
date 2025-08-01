#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    showA()
    {
        cout<<"you are my friend"<<endl;
    }
};
class C:virtual public A
{

};
class D:virtual public A
{

};
class E:public C,public D
{
    public:
    show()
    {
        showA();
    }
};
int main ()
{
    E t;
    t.show ();

    return 0;
}