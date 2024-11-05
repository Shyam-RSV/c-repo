#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> age;
    age.push(15);
    age.push(20);
    age.push(19);
while (!age.empty()){
    int size = age.size();
    for(int i = 1; i <= size; i++){
        if(i == size){
            cout << i << ". " << age.front() << ". ";
        }else{
            cout << i << ". " << age.front() << " ," ;

        }
   age.pop();
}
}
}
