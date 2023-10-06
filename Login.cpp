#include <iostream>
#include <string>
using namespace std;

/* Mau bikin sistem login, jadi kalo ada yg daftar, auto menambahkan username dan pwnya */


void username(string a, string b) 
{
        if (a == "d.Ephraim" && b == "d.ephraim")
        {
            cout << "Welcome, Enjoy!" << endl;
        
        }
        else 
        {
            cout << "Please recheck your username or your password, and try again!" << endl;
        }
}


int main()
{
    string u1;
    string pw1;
    
    cout << "Input your username: ";
    cin >> u1;
    cout << "Input your password: ";
    cin >> pw1;
    username (u1,pw1);
}