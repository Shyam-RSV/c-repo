#include<iostream>
using namespace std;
int main (){
    if(0){
        st1 : cout << "HELLO" ;
        cout << "HEE" ;
        goto st2;
    }
    else{
        goto st1;
        st2 : cout << " WORLD";
    }
    return 0;
}