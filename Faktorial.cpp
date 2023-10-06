#include <iostream>
using namespace std;
int main(){
    int n, hasil=1;
    cout<<"Masukkan Bilangan (n!): "; cin>>n;
    if(n==1){
        cout<<"Hasil: 1";
    }
    else{
        for(int i=1; i<=n; i++){
            hasil = hasil * i; //hasil *=i
        }
        cout<<"Hasil: "<<hasil;
    }
}