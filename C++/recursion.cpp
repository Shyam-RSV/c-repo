#include<iostream>
using namespace std;
int sum(int num){
    if(num == 1){
        return 1;
    }
return num * sum(num - 1);

}
int main(){
    int n = 10;
    int result = sum(4);
    cout << result << "\n" ;
    

}