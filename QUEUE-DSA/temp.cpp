#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node (int data){
        this->data=data;
        next = NULL;
    }
};

class Queue{
    private:
    Node* head;
    Node* tail;
    int cs;
    public:
    Queue(){
        head=NULL;
        tail=NULL;
        cs=0;
    }

    void push(int data){
        if(head==NULL){
            Node* n=new Node(data);
            head=n;
            tail = n;
            cs++;
        }else{
            Node* n=new Node(data);
            tail->next = n;
            tail = n;
            cs++;
        }
    }

    void pop(){
        if(head==NULL){
            cout<<"queue is empty"<<endl;
        }else{
            Node* temp=head;
            head=head->next;
            delete temp;
            cs--;
        }
    }

    bool empty(){
        return head == NULL;
    }

    int size(){
        return cs;
    }

    int front(){
        if(head==NULL){
            cout<<"underflow"<<endl;
            return -1; // return some default value
        }else{
            return head->data;
        }
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

  return 0;
}