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

int helper(Node* root){
    if(root==NULL) return 0;
    return 1+max(helper(root->left),helper(root->right));
}

int helpersum(Node* root){
    if(root==NULL) return 0;
    return root->val+helpersum(root->left)+helpersum(root->right);
}

int helperSize(Node* root){
    if(root==NULL) return 0;
    return 1+helperSize(root->left)+helperSize(root->right);
}   

int helpersize(Node* root){
    if(root==NULL) return 0;
    return 1+helpersize(root->left)+helpersize(root->right);
}


void Display(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    Display(root->left);
    Display(root->right);
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
    cout<<"Height of the tree is: "<<helper(x)<<endl;
    cout<<"Sum of the tree is: "<<helpersum(x)<<endl;
    cout<<"Size of the tree is: "<<helperSize(x)<<endl;
}