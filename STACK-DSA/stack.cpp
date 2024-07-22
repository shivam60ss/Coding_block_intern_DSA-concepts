#include<iostream>
#include<stack>
using namespace std;
        
int main()
{
    stack<int> s;
    //push
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.top()<<endl;
    //pop
    s.pop();
    cout<<s.top()<<endl;

    //empty
    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"stack is not empty"<<endl;
        }
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }    
    
  return 0;
}