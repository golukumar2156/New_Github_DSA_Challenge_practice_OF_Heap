#include <iostream>
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

// BST mein LCA find karna
Node* findLCA(Node* root, int a, int b) {

    if (root == nullptr)
        return nullptr;

    if (a < root->data && b < root->data) {
        return findLCA(root->left, a, b);
    }

    if (a > root->data && b > root->data) {
        return findLCA(root->right, a, b);
    }

    return root;
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

    // LCA find karna
    int a = 20;
    int b = 40;

    Node* lca = findLCA(root, a, b);
    if (lca != nullptr)
        cout << "LCA of " << a << " and " << b
             << " is: " << lca->data << endl;
    else
        cout << "LCA Not Found" << endl;

    return 0;
}