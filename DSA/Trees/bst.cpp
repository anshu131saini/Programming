#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};

Node* insertiontoBST(Node*root,int d){
if(root==NULL)
{
    root=new Node(d);
    return root;
}
if(d > root->data){
    root->right=insertintoBST(root->right,d);
}

else
{
    root->left=insertiontoBST(root->left,d);
}
return root;
}

void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        insertiontoBST(root,data);
        cin>>data;
    }
}

int main()
{
    Node* root=NULL;
    cout<<"Enter inputs";
    takeinput(root);

return 0;
}