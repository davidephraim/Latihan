#include <iostream>
using namespace std;

int main()
{
    int a, n, h;

    cout<<"Input Angka: ";
    cin>>a;

    cout<<"Input Pangkat: ";
    cin>>n;

    h = 1;

/*    for(int i = 0; i<n; i++)
    {
        h = h * a;
    }
    cout<<"Hasil = " << h;
    return 0;
*/
int i = 0;

/*while(i<n)
{
    h = h * a;
    i++;
}
    cout<<"Hasil: "<<h;
*/

do 
{
    h = h * a;
    i++;
}
while(i<n);
cout<<"Hasil: "<<h;
}