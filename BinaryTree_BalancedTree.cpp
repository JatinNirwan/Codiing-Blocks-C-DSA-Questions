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
void bfs(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* f = q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<f->data<<",";
            q.pop();
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);
            }
        }
    }
    return;
}
class HBPair
{
public:
    int height;
    bool balance;
};
HBPair isHeightBalance(node* root)
{
    HBPair p;
    if(root==NULL)
    {
        p.height=0;
        p.balance=true;
    }
    //Recursive Case
    HBPair left = isHeightBalance(root->left);
    HBPair right = isHeightBalance(root->right);
    p.height = max(left.height,right.height)+1;

    if(abs(left.height-right.height)<=1 && left.balance && right.balance)
    {
        p.balance=true;
    }
    else
    {
        p.balance=false;
    }
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
    if(isHeightBalance(root).balance)
    {
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1


