#include<iostream>
using namespace std;
struct car{
    string name;
    int age;
    int dob;
};
int main (){
    car car1;
    car1.name = "BMW";
    car1.age = 20;
    car1.dob = 2002;

    car car2;
    car2.name = "Koenisegg";
    car2.age = 25;

    cout << car2.name << car1.name ;


}