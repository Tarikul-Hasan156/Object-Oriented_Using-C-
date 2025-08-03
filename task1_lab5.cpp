#include<iostream>
using namespace std;
class Rectangle
{
private :
    int height ,width;
public:
    void set_h(int h,int w)
    {
        height=h;
        width=w;
    }
    void display ()
    {
        cout<<height<<" "<<width<<endl;
    }

};
int  main ()
{
    int x,y;
    int i;
   Rectangle r[40];
   for (i=0;i<40;i++)
   {
      cin>>x>>y;
      r[i].set_h(x,y);
   }
   for (i=0;i<40;i++)
   {

      r[i].display();
   }
}
