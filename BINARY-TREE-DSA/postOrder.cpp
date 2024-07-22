#include<iostream>
using namespace std;

//     1
//    / \ 
//   2   3
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

void postOrder(node* root){
    //base
    if(root==NULL){
        return ;

    }
    //lst-->rst-->root
    //postOrder print 

    postOrder(root->left);//lst
    postOrder(root->right);//rst
    cout<<root->data<<" ";

}
        
int main()
{
    node* root=buildTree();
    postOrder(root);
    
  return 0;
}