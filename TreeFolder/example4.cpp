#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void Display(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    Display(root->left);
    Display(root->right);
}

void helper(Node* root){
    if(root==NULL) return;
        Node* temp=root->left;
        root->left=root->right;
        root->right=temp;
    helper(root->left);
    helper(root->right);
}

int main(){
     Node* x=new Node(10);
     Node* y=new Node(20);
     Node* z=new Node(30);
     Node* a=new Node(40);
     Node* b=new Node(50);
     Node* c=new Node(60);
     Node* d=new Node(70);
     Node* e=new Node(80);
     x->left=y;
     x->right=z;
     y->left=a;
     y->right=b;
     z->left=c;
     z->right=d;
     c->left=e;
    Display(x);
    cout<<endl;
    helper(x);
    Display(x);
    return 0;
}