#include<iostream>
using namespace std;
class absFriends{
    virtual void houroscope() = 0;
};
class friends : absFriends{
private:
    string girlFriend;
    string name;
public:
    int year;
    void putGF(string gf){
        girlFriend = gf;
    }
    string getGF(){
        return girlFriend;
    }
    void putname(string nam){
        name = nam;
    }
    string getname(){
        return name;
    }
    string introduceYourself(){
        cout << name << " Weds " << girlFriend << endl;
    }
    friends(string name1, string gfName, int year){
        cout << name1 << " weds " << gfName << " on " << year << endl;
    }
    void houroscope(){
        if(year >= 2025){
            cout << "You will have kids" << endl;
        }else{
            cout << "You won't have kids" << endl;
        }
    }
};
class enemy : public friends{
public:
    string name;
    enemy(string name1, string gfName, int year, string enem)
    : friends(name1, gfName, year )
    {
        
 
    }
    
};
int main(){
    friends friend1 = friends("Vigneshwar" , "Zameela", 2025);
    friend1.houroscope();
    friends friend2 = friends("Ravindran", "Deepika", 2024);
    friend2.houroscope();


}