#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
//how to take the input from the user
node* buildLinkedList(){
  node* head=NULL;
  node* tail=NULL;
  int data;
  cin>>data;
while(data!=-1)
{
  if(head==NULL){
    node* n=new node(data);
    head=n;
    tail=n;
  }else{
    node* n=new node(data);
    tail->next=n;
    tail=n;
  }
  cin>>data;
}
return head;

}
//to find lengh of LL
int length(node* head){
  int len=0;
  node* temp=head;
  while(temp!=NULL){
    len++;
    temp=temp->next;
  }
  return len;
}
node* MiddleLL(node* head){
  //length find karne wali appoach
  int len =length(head);
  int mid=(len-1)/2;
  node* temp=head;
  for(int i=0;i<mid;i++){
    temp=temp->next;
  }
  return temp;
}
//using slow and fast pointers/here and tortoise /flyod algorithm
node* MiddleLinkedList(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}



void print(node* head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"-->";
    temp=temp->next;

  }
  cout<<"NULL"<<endl;
}

        
int main()
{
   node* head = buildLinkedList();
   print(head);
   node* midNode=MiddleLL(head);
   if(midNode==NULL){
    cout<<"MIddle doen't exist"<<endl;
   }else{

   cout<<"middle node:"<<midNode->data<<endl;
   }
  return 0;
}