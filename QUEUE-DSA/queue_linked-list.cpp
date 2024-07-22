#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node (int data){
        this->data=data;
        next = NULL;

    }

};
class queue{
    private:
    node* head;
    node* tail;
    int cs; //current size
    public:
    queue(){
        head=NULL;
        tail=NULL;
        cs=0;
}

void push(int data){
    if(head==NULL){
        node* n=new node(data);
        head=n;
        tail = n;
        cs++;
        }else{
            node* n=new node(data);
            tail->next = n;
            tail = n;
            cs++;
        }
    }

    void pop(){
        if(head==NULL){
            cout<<"queue is empty"<<endl;

    }
    else{
        node* temp=head;
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
    }else{
        return head->data;
    }
}
};
        
int main()
{
    queue q;
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