#include<iostream>
#include<vector>
#include<map>
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
void topView(Node* root, map<int,pair<int,int>>& mp, int hd, int level){
    if(root == NULL) return;

    // Agar is HD par pehli baar node mila
    // ya current node upar hai
    if(mp.find(hd) == mp.end() || level < mp[hd].first){
        mp[hd] = {level, root->val};
    }

    topView(root->left, mp, hd - 1, level + 1);
    topView(root->right, mp, hd + 1, level + 1);
}
void helperleftView(Node* root, vector<int>& v, int level){
    if(root == NULL) return;

    if(level == v.size()){
        v.push_back(root->val);
    }

    helperleftView(root->left, v, level + 1);
    helperleftView(root->right, v, level + 1);
}
void helperrightView(Node* root, vector<int>& v, int level){
    if(root == NULL) return;

    if(level == v.size()){
        v.push_back(root->val);
    }
    helperrightView(root->right, v, level + 1);
    helperrightView(root->left, v, level + 1);    
}
void bottomView(Node* root, map<int,pair<int,int>>& mp, int hd, int level){
    if(root == NULL) return;

    // Same HD par neeche wala node update karo
    if(mp.find(hd) == mp.end() || level >= mp[hd].first){
        mp[hd] = {level, root->val};
    }

    bottomView(root->left, mp, hd - 1, level + 1);
    bottomView(root->right, mp, hd + 1, level + 1);
}
int helperh(Node* root){
    if(root==NULL) return 0;
    return 1+max(helperh(root->left),helperh(root->right));
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
    cout<<"Height of tree "<<helperh(a);
    vector<int> v;
    helperleftView(a, v, 0);
    cout << "\nLeft view of the tree: ";
    for (int val : v) {         
        cout << val << " ";
    }
    v.clear();
    helperrightView(a, v, 0);
    cout << "\nRight view of the tree: ";
    for (int val : v) {
        cout << val << " ";
    }
    map<int,pair<int,int>> mp;
    topView(a, mp, 0, 0);
    cout << "\nTop view of the tree: ";
    for (auto it : mp) {
        cout << it.second.second << " ";
    }
    mp.clear();
    bottomView(a, mp, 0, 0);
    cout << "\nBottom view of the tree: ";
    for (auto it : mp) {
        cout << it.second.second << " ";
    }
    return 0;
}