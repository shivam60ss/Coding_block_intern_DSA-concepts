#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
        
int main()
{
    node a;
    a.data=1;
    a.next=  NULL;

    node b;
    b.data = 2;
    b.next = NULL;

    node c;
    c.data = 3;
    c.next = NULL;

    a.next = &b;
    b.next = &c;
    cout<<a.data<<"-->"<<(a.next)->data<<"-->NULL"<<endl;
    //or
     cout<<a.data<<"-->"<<(*a.next).data<<"-->NULL"<<endl;

     cout<<a.data<<"-->"<<(a.next)->data<<"-->"<<(a.next)->next->data<<endl;

    
  return 0;
}