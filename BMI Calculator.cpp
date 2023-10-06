#include <iostream>
using namespace std;

int main()
{
    float m, h, BMI;

    cout<<"Input Mass: ";
    cin>>m;
    cout<<"Input Height: ";
    cin>>h;

    BMI = m / (h*h);

    if(BMI>=0 && BMI <=18)
    {
        cout<<"Underweight"<<endl;
    }
    
    else if(BMI>=18.1 && BMI<=25)
    {
        cout<<"Normal"<<endl;
    }
    else if(BMI>=25.1 && BMI<=30)
    {
        cout<<"Overweight"<<endl;
    }
    else
    {
        cout<<"Obese"<<endl;
    }
    
}