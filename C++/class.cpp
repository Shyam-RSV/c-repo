#include<iostream>
using namespace std;
class newClass {
    private:
    int salary;
    
    public:
    int age;
    int dob;
    string name;
    void newClassFun(){
        cout << "Im from class method" << "\n";
    }
    int newSalary(int sal){
        return salary = sal + 10;
    }
};
int main(){
    newClass myObj;
    myObj.age = 21;
    myObj.dob = 2002;
    myObj.name = "Sathyashyam";

    newClass newObj;
    newObj.age = 22;
    newObj.name = "Vigneshwar";

    cout << newObj.age << "  " << myObj.age ;
    newClass clsMethod;
    clsMethod.newClassFun();
    newClass newSala;
   cout << newSala.newSalary(200);
    return 0;
}