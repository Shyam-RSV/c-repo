#include<iostream>
using namespace std;
int main (){
    string myStr = "RAVINDRAN" ;
    int vowels = 0;
    int size = myStr.length();

    for(int i = 0; i < size; i++){
        if(myStr[i] == 'A' || myStr[i] == 'E' || myStr[i] == 'I' || myStr[i] == 'O' || myStr[i] == 'U'){
            vowels ++;
        }

    }
    cout << "Vowels Count = " << vowels ;

}