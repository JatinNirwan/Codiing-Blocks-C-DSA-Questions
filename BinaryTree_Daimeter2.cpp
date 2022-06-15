#include<bits/stdc++.h>
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
class Pair
{
public:
    int height;
    int diameter;
};
Pair fastDiameter(node* root)
{
    Pair p;
    if(root==NULL)
    {
        p.diameter=0;
        p.height=0;
        return p;
    }
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);
    p.height = max(left.height,right.height)+1;
    p.diameter = max(left.height + right.height, max(left.diameter,right.diameter));
    return p;
}
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

int main()
{
    node* root = buildTree();
    Pair p = fastDiameter(root);
    cout<<p.diameter<<endl;
    cout<<p.height<<endl;
    return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

