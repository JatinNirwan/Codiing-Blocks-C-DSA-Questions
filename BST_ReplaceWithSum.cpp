#include<iostream>
using namespace std;

// Replace with Sum (BST)

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=this->right=NULL;
    }
};

node* insert(node* root,int d)
{
    // base case
    if(!root)
    {
     node* root=new node(d);
        return root;
    }
    // recursive case
    if(d<=root->data)
    {
        root->left=insert(root->left,d);
    }
    else{
        root->right=insert(root->right,d);
    }

    return root;
}

node* create(int n){
    node* root=NULL;

    int i=0;
    while(i<n)
    {
        int d;
        cin>>d;
        root=insert(root,d);
        i++;
    }
    return root;
}

int sum=0;
void bstSum(node* root)
{
    if(!root)
    {
        return;
    }

    bstSum(root->right);
    sum+=root->data;
    root->data=sum-root->data;
    bstSum(root->left);
}

void print(node* root)
{
    // base
    if(!root->left and !root->right)
    {
        cout<<"END => "<<root->data<<" <= END"<<endl;
        return;
    }
    // recursive case
    if(!root->left)
    {
        cout<<"END => "<<root->data<<" <= "<<root->right->data<<endl;
        print(root->right);
    }
    else if(!root->right)
    {
        cout<<root->left->data<<" => "<<root->data<<" <= END"<<endl;
        print(root->left);
    }
    else{
        cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;
        print(root->left);
        print(root->right);
    }
}

int main()
{
    node* root=NULL;
    int n;
    cin>>n;
    root=create(n);
    bstSum(root);
    print(root);
    return 0;
}
