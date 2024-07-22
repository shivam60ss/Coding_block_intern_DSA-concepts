#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    //constructor
    node(int d){
        data=d;
        next=NULL;

    }
};

class Stack{
    private:
    node* head;
    public:
    Stack(){
        head=NULL;
    }
    //push
    void push(int data){
        node* n=new node(data);
        n->next = head;
        head = n;
    }
    //top
    int top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;

        }
        return head->data;
    }
    //pop
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;
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

    //pop
    s.pop();
    cout<<s.top()<<endl;
    
    return 0;
}