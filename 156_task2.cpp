
#include<iostream>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    int Count=0;
    int i;
    for (i=1; i<=x; i++)
    {
        if (x%i==0)
        {
            Count++;

        }
    }
    if (Count==2)
    {
        cout<<x<<" "<<"is a prime number";
    }
    else
    {
        cout<<x<<" "<<"is not a prime number";

    }
    return 0;
}
