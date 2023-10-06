#include <iostream>
using namespace std;

//FIBO//
/*
int fibo(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}

int main(){
    int n;
    cout<<"Input Number: "; cin>>n;
    cout<<fibo(n);   
}
*/
/*
void fibo(int n, int* F){
    int F1, F2;
    if(n==1){
        *F=1; //Ubah nilai 
    }
    else if(n==2){
        *F=1; //Ubah nilai
    }
    else{
        fibo(n-1, &F1); //Panggil, lalu simpan di F1
        fibo(n-2, &F2);
        *F=F1+F2;
    }
}

int main(){
    int n, F;
    cout<<"Input Number: "; cin>>n;
    cout<<fibo(n, &F);
    cout<<F;
}
*/

/*
//Factorial//
int facto(int n){
    if(n==0){
        return 1;
    }
    else if(n==1)
        return 1;
    else   
        return n * facto(n-1);
}

int main(){
    cout<<facto(5);
}
*/

/*
//Program n(n+1)/2
int hitung(int n){
    if(n==1){ //Basis: Buat berhenti
        return 1;
    }
    else{ //Rekursif
        return n + hitung(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<hitung(n);
}
*/


