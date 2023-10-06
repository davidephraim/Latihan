// //Buatlah program yang menampilkan angka ganjil yang dapat dibagi 5 dari angka 342 sampai 970

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i;
//     for(i=345;i<=965;i++)
//     {
//         if(i%5==0 && i%2!=0)
//         {
//             cout<<i<<endl;
//         }
//     }
// }

#include <iostream>
using namespace std;
void demo(int x) {
  cout << x/2;
}
void demo(double s) {
 cout << s-2;
}

int main() {
  demo(8);
}

// int main(){
  // int num = 2;
  // int *p = &num;

  // cout<<p<<endl;
  // cout<<*p<<endl;
  // cout<<&p<<endl;
  // cout<<num<<endl;
  // cout<<&num<<endl;

  // int a = 4;
  // int *p = &a;
  // a += 2;
  // *p += 3;
  // a -= 1;
  // cout << a;
  
// }