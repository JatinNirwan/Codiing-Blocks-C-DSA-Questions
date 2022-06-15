#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildTree()
{
    //Pre order
    int d;
    cin>>d;
    if(d == -1)
    {
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void printPreOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    //print root first followed by children
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
void printInOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    //left root right
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}
void printPostOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    //left right root
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}
void printkthLevel(node* root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printkthLevel(root->left,k-1);
    printkthLevel(root->right,k-1);
    return;
}
void printAllLevel(node* root)
{
    int H = height(root);
    for(int i=1;i<=H;i++)
    {
        printkthLevel(root,i);
        cout<<endl;
    }
    return;
}
int main()
{
    node* root = buildTree();
    printPreOrder(root);
    cout<<endl;
    printInOrder(root);
    cout<<endl;
    printPostOrder(root);
    cout<<endl;
    cout<<height(root)<<endl;
    printAllLevel(root);
    return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
