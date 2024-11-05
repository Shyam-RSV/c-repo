#include<iostream>
using namespace std;
class abstractLaptop{
    virtual void absLaptop() = 0;
};

class Laptop : abstractLaptop{
private:
    int prize;
public:
    string lapName;
    int ram;
    int storage;
    Laptop(string name, int ramm){
        lapName = name;
        ram = ramm;
    }
    void laptopIntro(){
        cout << "Laptop : " << lapName << endl;
        cout << "Spec Ram in GB :" << ram << endl;
    }
    void putPrize(int pri){
        prize = pri;
    }
    int getPrize(){
        return prize;
    }
    void absLaptop(){
        if (ram > 8){
            cout << "GOOD" << endl;
        }else{
            cout << "BAD" << endl;
        }
    }
    virtual void work(){
        cout << "Virtual class" << endl;
    }  
};
class personalComputer : public Laptop{
public:
    string motherBoard;
    string gpuBrand;
    personalComputer(string name, int ramm, string mBoard)
    : Laptop(name, ramm){
        motherBoard = mBoard;
    }
    void pcIntro(){
        cout << ram << motherBoard << endl;
    }
    void work(){
        cout << "The ram upgrade is needed" << endl;
    }  

};
int main(){
    //Laptop lap1 = Laptop ("Lenovo thinkbook", 16);
    //Laptop lap2 = Laptop ("HP VOSTRO", 8);
    //lap1.laptopIntro();
    //lap2.laptopIntro();
    //lap1.putPrize(45000);
    //cout << "Laptop prize : "<< lap1.getPrize()<< endl;
    //lap1.absLaptop();
    //lap2.absLaptop();
    //personalComputer pc = personalComputer("Asus", 16, "ROG");
    //pc.pcIntro();
    Laptop lp = Laptop("Lenovo thinkbook", 16);
    personalComputer pc = personalComputer("Asus", 16, "ROG");
    Laptop *l1 = &pc;
    lp.work();
} 