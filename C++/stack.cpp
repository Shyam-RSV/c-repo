#include<iostream>
#include<stack>
using namespace std;
int main (){
    stack<string> name;
    stack<string> college;
    name.push("Shyam");
    name.push("Ravi");
    name.push("Vicky");
    while (!name.empty()){
        int size = name.size();
        for(int i=1; i<=size; i++){
        cout <<i << ". " << name.top() << ", ";
        name.pop();
        }
    }
    college.push("Vicky");
    name.push("Panda") ;
    name.swap(college);
    cout << college.top() << endl;
    college.pop();

    

    return 0;
}