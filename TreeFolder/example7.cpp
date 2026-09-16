#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};


// BST mein node insert karne ka function
Node* insert(Node* root, int value) {

    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

    
void helper(Node* root,vector<int>&ans) {

    if (root == nullptr) {
        return;
    }
    if(root->left!=nullptr && root->right==nullptr){
        ans.push_back(root->left->data);
    }
    else if(root->left==nullptr && root->right!=nullptr){
        ans.push_back(root->right->data);
    }
    helper(root->left,ans);
    helper(root->right,ans);
}



int main() {

    Node* root = nullptr;

    // BST create karna
    root = insert(root, 50);    
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    root = insert(root, 90);


    vector<int> ans;
    helper(root, ans);
    if(ans.empty()){
        ans.push_back(-1);
        cout<<"Sibilng nodes not found : ";
    }
    else{
        cout<<"Sibling nodes are: ";
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}