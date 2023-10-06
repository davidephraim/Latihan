#include <iostream>
#include <windows.h>
using namespace std;

// Data yang disimpan: nama, merek rating, harga beli pergram, (lokal/import).
struct Coffee{
    string name;
    string brand;
    int rate;
    int priceGr;
    int type;
    string purchaseDate;
    double price;
};

Coffee arr[100];

// Add Coffee Categories
void addCoffee(string name, string brand, int rate, int priceGr, int type){
    int i=0;
    while(arr[i].name != "") ++i;
    
    arr[i].name = name;
    arr[i].brand = brand;
    arr[i].rate = rate;
    arr[i].priceGr = priceGr;
    arr[i].type = type;
}

// Ascending Sort for purchased date
void sortAsc(){
    int i=0;
    while(!arr[i].name.empty()) ++i;

    for(int j=0; j<i; ++j){
        for(int k=0; k<i-1; k++){
            if(arr[k].purchaseDate > arr[k+1].purchaseDate){
                Coffee temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
}

// Display
void display(){
    int i=0;
    if(!arr[i].name.empty()){
        while(arr[i].name != ""){
            cout<<"Coffee       : "<<arr[i].name<<endl;
            cout<<"Brand        : "<<arr[i].brand<<endl;
            cout<<"Coffee Rating: "<<arr[i].rate<<endl;
            cout<<"Coffee Price : "<<arr[i].priceGr<<endl;
            cout<<"Coffee Type  : "<<arr[i].type<<endl;
            cout<<"Purchase Date: "<<arr[i].purchaseDate<<endl;
            ++i;
        }
    }
    else cout<<"Empty!"<<endl;
}

// Search Coffee
string searchCoffee(int priceGr){
    for (int i=0 ; i<sizeof(arr)/sizeof(*arr); ++i)
        if (!arr[i].name.empty() && arr[i].priceGr == priceGr) return arr[i].name, arr[i].brand, arr[i].rate, arr[i].priceGr, arr[i].type, arr[i].purchaseDate;
    return "Not Found!";
}

// Show Rating menu in Customer menu
void rating(){
    for (int i=0 ; i<sizeof(arr)/sizeof(*arr); ++i) {
        if(!arr[i].name.empty() && arr[i].rate > 4){
            cout<<"Coffee       : "<<arr[i].name<<endl;
            cout<<"Brand        : "<<arr[i].brand<<endl;
            cout<<"Coffee Rating: "<<arr[i].rate<<endl;
            cout<<"Coffee Price : "<<arr[i].priceGr<<endl;
            cout<<"Coffee Type  : "<<arr[i].type<<endl;
            cout<<"Purchase Date: "<<arr[i].purchaseDate<<endl;
        }
        else{
            cout<<"Coffee       : "<<arr[i].name<<endl;
            cout<<"Brand        : "<<arr[i].brand<<endl;
            cout<<"Coffee Rating: "<<arr[i].rate<<endl;
            cout<<"Coffee Price : "<<arr[i].priceGr<<endl;
            cout<<"Coffee Type  : "<<arr[i].type<<endl;
            cout<<"Purchase Date: "<<arr[i].purchaseDate<<endl;
        }
    }
}

// Order
void order(){
    string name, brand, purchaseDate;
    int rate, priceGr, type;
    cin.ignore();
    cout<<"Coffee       : "; getline(cin, name);
    cout<<"Brand        : "; getline(cin, brand);
    cout<<"Coffee Type  : "; cin>>type;
    cout<<"Order Date   : "; cin>>purchaseDate;
    int i=0;
    double price;
    while(!arr[i].name.empty()){
        if(arr[i].brand == brand && arr[i].type == type){
            price = arr[i].price;
            arr[i].priceGr -= 10;
            arr[i].purchaseDate = purchaseDate;
            break;
        }
    }
    cout<<"Coffee Price : "<<price;
}

// Login n User menu
int menuLogin(){
    int action;
    cout<<"[1] Admin"<<endl;
    cout<<"[2] Purchase"<<endl;
    cout<<"[0] Exit"<<endl;
    cout<<"Input Action: "; cin>>action;
    return action;
}

// Admin Menu
int menuAdmin(){
    int action;
    cout<<"[1] Add Stock"<<endl;
    cout<<"[2] Display Stock"<<endl;
    cout<<"[3] Sort Stock"<<endl;
    cout<<"[4] Search by Stock"<<endl;
    cout<<"[0] Exit"<<endl;
    cout<<"Input Action: "; cin>>action;
    return action;
}

// User Menu
int menuCustomer(){
    int action;
    rating();
    cout<<"[1] Show Menu"<<endl;
    cout<<"[2] Show Menu by Rating"<<endl;
    cout<<"[3] Order"<<endl;
    cout<<"[0] Exit"<<endl;
    cout<<"Input Action: "; cin>>action;
    return action;
}

void errHandler(){
    cout<<"Invalid Input!"<<endl;
    Sleep(1000);
    system("cls");
}

int main(){
    int mnL, mnA, mnC;
    string name, brand, purchaseDate;
    int rate, priceGr, type;
    while(mnL = menuLogin()){
        switch(mnL){
            case 1:
                while(mnA = menuAdmin()){
                    switch(mnA){
                        case 1:
                            cin.ignore();
                            cout<<"Coffee       : "; getline(cin, name);
                            cout<<"Brand        : "; getline(cin, brand);
                            cout<<"Coffee Type  : "; cin>>type;
                            cout<<"Coffee Rate  : "; cin>>rate;
                            cout<<"Stock        : "; cin>>priceGr;
                            addCoffee(name, brand, rate, priceGr, type);
                        break;
                        case 2:
                            display();
                        break;
                        case 3:
                            sortAsc();
                            display();
                        break; 
                        case 4:
                            cout<<"Input Stock: "; cin>> priceGr;
                            if(priceGr > 0) cout<<searchCoffee(priceGr)<<endl;
                            else cout<<"Invalid Input!"<<endl;
                        break;
                        case 0:
                        break;
                        default:
                            cout<<"\nInvalid Input";
                        break;
                    }
                }
            break;
            case 2:
                while(mnC = menuCustomer()){
                    switch(mnC){
                        case 1:
                            display();
                        break;
                        case 2:
                            rating();
                        break;
                        case 3:
                            order();
                        break;  
                        case 0:
                        break;
                        default:
                            cout<<"Invalid Input!"<<endl;
                        break;
                    }
                }
            break;
            case 0:
                cout<<"Bye"<<endl;
                exit(0);
            break;
            default:
                cout<<"Invalid Input!"<<endl;
            break;
        }
    }
    return 0;
}