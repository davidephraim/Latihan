#include <iostream>
using namespace std;

int main()
{
    float f, d, h;
    cout<<"Input Full Charge Capacity: "; cin>> f;
    cout<<"Input Design Capacity: "; cin>> d;
    h = f / d * 100;
    cout<<"Battery Health: "<<h;
    cout<<" %"<<endl;
    if(h>=85)
    {
        cout<<"Your Battery Health still Good!"<<endl;
    }
    else if (h==80)
    {
        cout<<"Your Battery Health still Good, Keep it up!";
    }
}