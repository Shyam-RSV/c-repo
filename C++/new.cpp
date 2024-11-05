#include<iostream>
using namespace std;
int main(){
string food = "MAGGIE";
string &meal = food;

cout << &food;
string* pointr = &food;
cout << pointr;
}