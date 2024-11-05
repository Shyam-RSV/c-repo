#include<iostream>
using namespace std;
int main (){
    int a = 10;
    int *ptr = &a;
    //*ptr = 5;
    cout << ptr << endl; 
    cout << *ptr << endl;

    int b = 20;
    string laptop = "Thinkbook";
    int &var = b;
    var = var + 4;
    cout << "Value of a " << b << "\nValue of var "  << var << endl;
}