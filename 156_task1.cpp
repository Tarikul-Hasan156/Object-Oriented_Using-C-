
#include<iostream>
using namespace std;
int main ()

{
    int arr[10];

    int i;
    int Max=arr[0];
    for (i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    for (i=0; i<10; i++)
    {
        if (arr[i]>Max)
        {
            Max=arr[i];
        }
    }
    cout<<Max<<endl;
    return 0;

}
