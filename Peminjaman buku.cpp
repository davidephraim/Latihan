#include <iostream>
using namespace std;

int main()
{
    int t, r, n, k, i, tp, tt;
    
    cout<<"Books Type: \n1. Novel\n2. Komik\n3. Ilmiah";
    cout<<"\nEntry your books type: ";
    cin>>t;
    //Masuk ke type of books

    cout<<"Rate per Day(s): ";
    cin>>r;

    n = 5000 * r;
    k = 10000 * r;
    i = 15000 * r;

    if(t==1)
    {
        cout<<"Total Payment: "<<n;
    }
    else if(t==2)
    {
        cout<<"Total Payment: "<<k;
    }
    else
    {
        cout<<"Total Payemnt: "<<i;
    }
}