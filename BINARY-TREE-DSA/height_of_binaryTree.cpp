#include<iostream>
using namespace std;

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
int heightBinaryNode(node* root ){
    if(root==NULL){
        return 0;
        }
        int leftHeight = heightBinaryNode(root->left);
        int rightHeight = heightBinaryNode(root->right);
        return max(leftHeight,rightHeight)+1;


    }
    

        
int main()
{
    node* root = buildTree();
    cout<<heightBinaryNode(root);
  return 0;
}