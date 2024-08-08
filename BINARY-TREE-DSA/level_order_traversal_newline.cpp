#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildtreeLevelorder() {
    cout << "Enter root node data :" << endl;
    int data;
    cin >> data;
    if(data == -1) {
        return NULL;
    }
    node* root = new node(data);
    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        node* current = q.front();
        q.pop();

        cout << "Enter left child of " << current->data << " (enter -1 if no child): ";
        int leftData;
        cin >> leftData;
        if(leftData != -1) {
            current->left = new node(leftData);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->data << " (enter -1 if no child): ";
        int rightData;
        cin >> rightData;
        if(rightData != -1) {
            current->right = new node(rightData);
            q.push(current->right);
        }
    }
    return root;
}

void levelOrderTraversal(node* root) {
    if(root == NULL) {
        return;
    }
    queue<node*> q;
    q.push(root);
    while(q.empty()) {
        int sz=q.size();
        while(sz--){
        node* current = q.front();
        q.pop();
        cout << current->data;
        if(current->left != NULL) {
            q.push(current->left);
        }
        if(current->right != NULL) {
            q.push(current->right);
        }
    }
    cout << endl;
}

}
int main() {
    node* root = buildtreeLevelorder();
    cout << "Level order traversal: ";
    levelOrderTraversal(root);
    return 0;
}