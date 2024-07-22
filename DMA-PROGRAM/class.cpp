#include<iostream>
#include<cstring>
using namespace std;
//-------------------tenplate /blue print -------------
class Student{
    public:
    char name[100];
    int rollnumber;
    int age;
};

        //classese are also calles user defind data type
int main()
{
    int a=10;
    
    Student s1;
    //to aces properties of an object we use (.) dot opertor
    strcpy(s1.name,"abc");
    s1.rollnumber=1;
    s1.age=20;
    //to know the value of properties
    cout<<s1.name<<endl;
    cout<<s1.rollnumber<<endl;
    cout<<s1.age<<endl;
    


  return 0;
}