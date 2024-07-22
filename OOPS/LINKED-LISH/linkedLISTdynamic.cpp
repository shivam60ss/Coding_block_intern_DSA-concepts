#include <bits/stdc++.h>
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
void insertionAtend(node* &head,node* &tail,int data){
    if(head ==NULL){
        node* n=new node(data);
        head=n;
        tail=n;
    }
    else{
node* n=new node(data); 
    tail->next=n;
    tail=n;
    }
}

void insertionAtFront(node* &head,node* &tail,int data){
    if(head==NULL){
        node* n=new node(data);
        head=tail=n;
    }
    else{
        node* n=new node(data);
        n->next=head;
        head=n;
    }
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertionAtMid(node* &head,node* &tail,int pos,int data){
    node* temp=head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    node* n=new node(data);
    n->next=temp->next;
    temp->next=n;
}

void deletionATfront(node* &head ,node* &tail){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
}else if(head->next==NULL){
    delete head;
    head=tail=NULL;
}else{
    node* temp=head;
    head=head->next;
    delete temp;
}
}
void deletionAtEnd(node *&head,node* &tail){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
}else if(head->next==NULL){
    delete head;
    tail=NULL;
    head=NULL;
}else{
    node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
}
}
int length(node* head){
    int len=1;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void DeletionAtMid(node* &head,node* &tail,int pos){
    int len=length(head);
   if(pos==0){
    deletionATfront(head,tail);
   }
   else if(pos>=len-1){
    deletionAtEnd(head,tail);
   }
   else{
      node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    node* n=temp->next;
    temp->next=n->next;
    delete n;
   }
}

node* reverseLL(node* head){
    node* prev=NULL;
    node* curr=head;;
    node* next=curr->next;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main() {
    node* head=NULL;
    node* tail=NULL;
    insertionAtend(head,tail,1);
    insertionAtend(head,tail,2);
    insertionAtend(head,tail,3);
    insertionAtFront(head,tail,4);
    insertionAtFront(head,tail,2);
    insertionAtFront(head,tail,3);
    insertionAtMid(head,tail,2,20);
    print(head);
    deletionATfront(head,tail);
    print(head);
    deletionAtEnd(head,tail);
    print(head);
    DeletionAtMid(head,tail,2);
    print(head);
    node* temp =reverseLL(head);
    print(temp);
    return 0;
}