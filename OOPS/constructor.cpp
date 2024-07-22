#include<iostream>
#include<cstring>
using namespace std;

class Student{
    private:
    int bankBalance;
    public:
    char name[100];
    int rollNo;
    int age;
    //default constructor
    //default constructor garbage se intiliaze keta k data members ko
    Student(){
        cout<<"Default Constructor"<<endl;
        bankBalance = 0; // Initialize bankBalance to 0
    }
    //perameterized constructor/cuntom constructor
    //hmne jo value pass kari he 
    Student(char* n, int r, int a){
        cout<<"Perameterized Constructor"<<endl;
        strcpy(name,n);
        rollNo=r;
        age=a;
        
    }
    int getBankBalance(string pwd){
        if(pwd=="abc"){
            return bankBalance;
        }else{
            return -1;
        }
    }
};

int main()
{
    cout<<"object creation statically"<<endl;
    Student s1;
    Student s2("Rahul", 1, 20);
    //object creation dynamically
    Student *s3 = new Student("sfs",234,34);

    // Don't forget to delete dynamically allocated objects
    delete s3;

    return 0;
}