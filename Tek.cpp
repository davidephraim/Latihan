//jika ada 1 anak ayam maka anak ayam akan bersuara tek
//jika ada n anak ayam maka anak ayam akan bersuara tek ko tek (n kali) dan ujungnya harus bersuara tek juga
//contoh 
//3 anak ayam bersuara “tek ko tek ko tek ko tek”
//5 anak ayam bersuara “tek ko tek ko tek ko tek ko tek ko tek”

#include <iostream>
using namespace std;

int main()
{
    int i, a, b;
    cout<<"Input Anak Ayam: ";
    cin>>a;

    for(i=1;i<=a;i++)
    {
        cout<<"Tek Ko ";
    }
    cout<<"Tek ";
}
