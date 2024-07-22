#include<iostream>
using namespace std;

//     1
//    / \ 
//   2   3
//output lst-->root-->rst
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(){
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    //root
    node* root = new node(data);
    //LST
    root->left = buildTree();
    //rst
    root->right = buildTree();

    return root;
}

void InOrder(node* root){
    //base
    if(root==NULL){
        return ;

    }
    //root-->lst-->rst

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);

}
        
int main()
{
    node* root=buildTree();
    InOrder(root);
    
  return 0;
}