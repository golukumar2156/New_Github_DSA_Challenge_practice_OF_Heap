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
bool helper(Node* root ,int target){
    if(root==NULL){
        return false;
    }   
    if(root->val==target) return true;
    return helper(root->left,target) || helper(root->right,target);  
}   
int helper2(Node* root,int count){
    if(root==NULL){
        return count;
    }   
    count++;
    count=helper2(root->left,count);
    count=helper2(root->right,count);
    return count;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);   
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);
    Node* h=new Node(80);
    Node* i=new Node(90);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    f->left=h;
    f->right=i; 
    if(helper(a,50)){
        cout<<"Node found"<<endl;
    }
    else{
        cout<<"Node not found"<<endl;
    }
    int count=helper2(a,0);
    cout<<"Total number of nodes in the tree is: "<<count<<endl;
    return 0;
}