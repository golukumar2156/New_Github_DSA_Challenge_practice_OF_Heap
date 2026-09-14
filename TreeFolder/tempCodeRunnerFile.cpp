
     helper2(root->left,res+1);
     helper2(root->right,res+1);
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);   
    Node* d=new Node(40);