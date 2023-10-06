#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool IsLoggedIn()
{
    string username, password, pw, usr;
    cout<< "Please enter your username: ";
    cin>>usr;
    cout<< "Please enter your password: ";
    cin>>pw;

    ifstream read("data\\" + username + ".txt");
    getline(read, usr);
    getline(read, pw);

    if(usr==username && pw==password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    cout<< "1: Register\n2: Login\nYour choice: "; cin>>choice;
    if(choice == 1)
    {
        string username, password;
        cout<<"Select a username: ";
        cin>>username;
        cout<<"Select a password: ";
        cin>>password;

        ofstream file;
        file.open("data\\" + username + ".txt");
        file << username << endl << password;
        file.close();

        main();
    }
    else if (choice==2)
    {
        bool status = IsLoggedIn();
        if (!status)
        {
            cout<<"False Login!"<<endl;
            system("pause");
            return 0;
        }
        else
        {
            cout<< "Succesfuly logged in!"<<endl;
            system("pause");
            return 1;

        }
    }
}