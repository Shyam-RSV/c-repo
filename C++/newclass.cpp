#include <iostream>
using namespace std;

class employee{
    private:
    int salary;
    int empId;
    string name;

    public:
    void setSalary(int sl){
        salary = sl;
    }
        void setempId(int id){
        empId = id;
    }
        void setName(int nam){
        name = nam;
    }

    int getSalary(){
        return salary;
    }

};

int main(){
    employee myobj;
    myobj.setSalary(200);
    myobj.setempId(20);
    cout << "Salary" << myobj.getSalary();
    return 0;
}