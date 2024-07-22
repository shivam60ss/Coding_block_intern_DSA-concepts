#include<bits/stdc++.h>

using namespace std;
class Stack{
    private:
    vector<int> vec;
    public:
    //push
    void push(int x){
        vec.push_back(x);
        return;
    }
    //pop
    void pop(){
        if(vec.size()==0){
            cout<<"Stack is empty"<<endl;
            return;
    }
    vec.pop_back();
    return;

    }
    //top
     int top(){
        if(vec.size()==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
            return vec[vec.size()-1];
    }
    //EMPTY
    bool empty(){
        if(vec.size()==0){
            return true;
            }
            return false;
        }
};   

            
        
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //top
    cout<<s.top()<<endl; 
    //empty
    if(s.empty()==false){
        cout<<"Stack is not empty"<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
         }
    
    //pop
    s.pop();
    
    //top
    cout<<s.top()<<endl;

    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }


    
    


  return 0;
}