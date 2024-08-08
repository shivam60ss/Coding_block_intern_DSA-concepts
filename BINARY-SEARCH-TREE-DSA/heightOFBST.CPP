#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node* inseartBST(node* root,int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }
    if(data< root->data){
        //data jo h wo root ke data se chote h
        root->left = inseartBST(root->left,data);
    }else{
        //data jo h wo root ke data se bda he
        root->right=inseartBST(root->right,data);
    }
    return root;
}

node* createBST(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node*root=NULL;
    while(data!=-1){
        root=inseartBST(root,data);
        cin>>data;
    }
    return root;
}
//range between 7 and 13 example 7 8 9 10 11 12 13
void PrintRange(node* root,int k1,int k2){
    if(!root) return;

    if(root->data<k1){
    PrintRange(root->right,k1,k2);
    }else if(root->data>k2){
        PrintRange(root,k1,k2);
    }else{
        PrintRange(root->left,k1,k2);
            if(root->data>=k1 && root->data<=k2){
                cout<<root->data<<" ";

        }
        PrintRange(root->right,k1,k2);
    }

}
//height of binary search tree
int heightOFBST(node* root ){
    if(root==NULL){
        return 0;
        }
        int leftHeight = heightOFBST(root->left);
        int rightHeight = heightOFBST(root->right);
        return max(leftHeight,rightHeight)+1;
        

    }
    


void preOrder(node*root){
    if(!root) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node* root){  
    if(!root) return;
    inOrder(root->left);
    cout<<root->data<<" ";  // corrected here
    inOrder(root->right);
}

void postOrder(node* root){
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = createBST();
    cout<<"preorder"<<endl;
    preOrder(root);
    cout<<"\ninorder"<<endl;
    inOrder(root);
    cout<<"\npostorder"<<endl;
    postOrder(root);
    cout<<endl;
    int k1,k2;
    k1 = 7,k2 = 13;
    cout<<"Range"<<endl;
    PrintRange(root,k1,k2);

  return 0;
}