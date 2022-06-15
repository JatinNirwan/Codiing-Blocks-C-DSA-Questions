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
int replaceSum(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return root->data;
    }
    //Recursive part
    int leftsum = replaceSum(root->left);
    int rightsum = replaceSum(root->right);
    int temp = root->data;
    root->data = leftsum + rightsum;
    return temp + root->data;
}
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
    bfs(root);
    cout<<endl;
    replaceSum(root);
    bfs(root);
    return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1


