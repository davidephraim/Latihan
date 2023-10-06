#include <iostream>
using namespace std;

int main()
{
    int u, dus, rp;
    char c;
    

    cout<<"Input Money: ";
    cin>>u;

    rp = u * 15000;
    dus = u/15000;

    cout<<"Choose Number of Currency!";
    cout<<"\n1. IDR\n2. USD";
    
    cout<<"\n";
    cin>>c;
    if(c==1)
    {
        cout<<"Your IDR: "<<rp;
    }
    else
    {
        cout<<"Your USD: "<<dus;
    }
    
}