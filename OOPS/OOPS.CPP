#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Student
{
public:
    char name[20];
    int rollno;
    int age;

private:  
    int bankbalance;
public:
    void Setters(int data, string pwd){
        if(pwd=="abc"){
            bankbalance=data;
            cout<<"Bank Balance updated"<<endl;
        }else{
            cout<<"Invalid Password"<<endl;
        }
    }
    int Getters(string pwd){
        if(pwd=="abc"){
            return bankbalance;
        }else{
            return -1;
        }
    }
};        





int main()
{
    // object creation dynamically
    Student *s = new Student();
    strcpy(s->name, "per");
    s->rollno = 1;
    s->age = 20;
    s->Setters(1000,"abc");
    
    

    cout << "Name: " << s->name << endl;
    cout << "Roll No: " << s->rollno << endl;
    cout << "Age: " << s->age << endl;
    cout << "Bank Balance: " << s->Getters("abc") << endl;

    // Don't forget to delete the dynamically allocated memory
    delete s;

    return 0;
}