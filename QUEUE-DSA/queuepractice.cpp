#include<iostream>
using namespace std;

class Queue{
    private:
    int *a;
    int front;
    int rear;
    int cs;  //current size
    int n; //capacity of queue
    public:
    Queue(int size){
        this->cs = 0;
        this->n = size;
        a = new int[size];
        front = 0;
        rear = -1;
    }
    void push(int x){
        if(cs<n){
            rear = (rear + 1)%n;
            a[rear] = x;
            cs++;
        }
        else{
            cout<<"Queue is full"<<endl;
        }
    }
    void pop(){
        if(cs>0){
            front = (front + 1)%n;
            cs--;
        }
        else{
            cout<<"Queue is empty"<<endl;
        }
    }
    int Front(){
        if(cs>0){
            return a[front];
        }
        else{
            cout<<"Queue is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        return cs == 0;

    }
    int getSize(){
        return cs;

    }
    bool empty(){
        return cs == 0;
    }
    int size(){
        return cs;
    }
        
};

int main()
{
    Queue q(5); // Queue of size 5
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout <<q.size()<<endl;
    while(!q.empty()){
        cout<<q.Front()<<" ";
        q.pop();
    }
    return 0;
}