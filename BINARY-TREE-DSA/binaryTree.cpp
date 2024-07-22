#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
    

};

node* BuildTree(){
    int data;
    cin>>data;
    //data==-1;

    if(data==-1){
        return NULL;
    }
    //root node ko banane ka kaam mera h 
    node* root=new node(data);
    
    //recursion LST ko bana ke de dega
    root->left=BuildTree();
    //recursion RST ko bana ke de dega
    root->right=BuildTree();
    return root;
}
//print 
void print(node* root){
    if(root==NULL){
        return;
        }
        cout<<root->data<<" ";
        print(root->left);
        print(root->right);
}     
        
int main()
{
    node* root=BuildTree();
    print(root);
    

  return 0;
}