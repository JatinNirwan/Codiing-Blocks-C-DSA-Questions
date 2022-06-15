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
node* buildTree()
{
    //Pre order
    int d;
    cin>>d;
    node* root = new node(d);
	string s;
	cin>>s;
	if(s=="true")
	{
		root->left = buildTree();
	}
	cin>>s;
    if(s=="true")
	{
		root->right = buildTree();
	}
    return root;
}
vector<int> zigzagTraversal(node* root)
{
	if(root==NULL)
	{
		return{ };
	}
	vector<int> ans;
    queue<node*> q;
    q.push(root);
	bool flag = false;
    while(!q.empty())
    {
		int size = q.size();
		vector<int> level;
		for(int i=0;i<size;i++)
		{
			node* f = q.front();
			q.pop();
			level.push_back(f->data);
			if(f->left != NULL)
			{
				q.push(f->left);
			}
			if(f->right != NULL)
			{
				q.push(f->right);
			}
		}
		flag = !flag;
		if(flag==false)
		{
			reverse(level.begin(),level.end());
		}
		for(int i=0;i<level.size();i++)
		{
			ans.push_back(level[i]);
		}
    }
    return ans;
}
int main() {
	vector<int> v;
	node* root = buildTree();
	v = zigzagTraversal(root);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<"	";
	}
	cout<<endl;
	return 0;
}
