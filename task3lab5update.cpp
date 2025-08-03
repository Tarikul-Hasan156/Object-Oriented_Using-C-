#include<iostream>
using namespace std;
class Distance
{

private:
    int kilometers,meters,centimeters;
public:
    Distance()
    {
        kilometers=0;
        meters=0;
        centimeters=0;

    }
    Distance (int k,int m,int c)
    {
        kilometers=k;
        meters=m;
        centimeters=c;
    }
    void sub( Distance obj1,Distance obj2)
    {
        int hi = (obj1.kilometers * 100000) + (obj1.meters * 100) + obj1.centimeters;
        int hlw = (obj2.kilometers * 100000) + (obj2.meters * 100) + obj2.centimeters;

        int one = hi - hlw;

        kilometers = one / 100000;
        one = one%100000;
        meters = one / 100;
        centimeters = one % 100;
    }
    void display ()
    {

        cout<<kilometers<<" " <<meters<<" "<<centimeters<<endl;



    }

};
int main ()
{
    Distance r1 (10,00,00);
    Distance r2(9,999,99);
    Distance r3;
    r3.sub (r1,r2);
    r3.display();


}
