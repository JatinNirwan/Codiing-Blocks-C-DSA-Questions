#include<bits/stdc++.h>
using namespace std;
class node
{
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
node* createTree()
{
	int data;
	cin>>data;
	node* root = new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		node* front = q.front();
		q.pop();
		int leftdata;
		cin>>leftdata;
		if(leftdata != -1)
		{
			node* leftchild = new node(leftdata);
			front->left=leftchild;
			q.push(leftchild);
		}
		int rightdata;
		cin>>rightdata;
		if(rightdata != -1)
		{
			node* rightchild = new node(rightdata);
			front->right=rightchild;
			q.push(rightchild);
		}
	}
return root;
}
vector<vector<int>> findverticalTraversal(node* root)
{
	map<int,map<int,multiset<int>>> nodes;
	queue<pair<node*,pair<int,int>>> todo;
	todo.push({root,{0,0}});
	while(!todo.empty())
	{
		auto p = todo.front();
		todo.pop();
		node* n = p.first;
		int x = p.second.first;
		int y=  p.second.second;
		nodes[x][y].insert(n->data);
		if(n->left)
		{
			todo.push({n->left,{x-1,y+1}});
		}
		if(n->right)
		{
			todo.push({n->right,{x+1,y+1}});
		}
	}
	vector<vector<int>> ans;
	for(auto p: nodes)
	{
		vector<int> col;
		for(auto q: p.second)
		{
			col.insert(col.end(),q.second.begin(),q.second.end());
		}
		ans.push_back(col);
	}
	return ans;
}
int main() {
	int level;
	cin>>level;
	node* root = createTree();
	vector<vector<int>> verticalTraversal;
	verticalTraversal = findverticalTraversal(root);
	for(auto vertical:verticalTraversal)
	{
		for(auto nodeval: vertical)
		{
			cout<<nodeval<<"	";
		}
	}
	return 0;
}
