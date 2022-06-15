#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* left;
	Node* right;
	Node(int data)
	{
		this->data=data;
		this->left=this->right=NULL;
	}
};
void findMinMax(Node *node, int *min, int *max, int hd)
{
    // Base case
    if (node == NULL) return;

    // Update min and max
    if (hd < *min)  *min = hd;
    else if (hd > *max) *max = hd;

    // Recur for left and right subtrees
    findMinMax(node->left, min, max, hd-1);
    findMinMax(node->right, min, max, hd+1);
}

// A utility function to print all nodes on a given line_no.
// hd is horizontal distance of current node with respect to root.
void printVerticalLine(Node *node, int line_no, int hd)
{
    // Base case
    if (node == NULL) return;

    // If this node is on the given line number
    if (hd == line_no)
        cout << node->data << " ";

    // Recur for left and right subtrees
    printVerticalLine(node->left, line_no, hd-1);
    printVerticalLine(node->right, line_no, hd+1);
}

// The main function that prints a given binary tree in
// vertical order
void verticalOrder(Node *root)
{
    // Find min and max distances with resepect to root
    int min = 0, max = 0;
    findMinMax(root, &min, &max, 0);

    // Iterate through all possible vertical lines starting
    // from the leftmost line and print nodes line by line
    for (int line_no = min; line_no <= max; line_no++)
    {
        printVerticalLine(root, line_no, 0);
    }
}
Node* createTree()
{
	int data;
	cin>>data;
	Node* root = new Node(data);
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* front = q.front();
		q.pop();
		int leftdata;
		cin>>leftdata;
		if(leftdata != -1)
		{
			Node* leftchild = new Node(leftdata);
			front->left=leftchild;
			q.push(leftchild);
		}
		int rightdata;
		cin>>rightdata;
		if(rightdata != -1)
		{
			Node* rightchild = new Node(rightdata);
			front->right=rightchild;
			q.push(rightchild);
		}
	}
return root;
}
// Driver program to test above functions
int main()
{
    // Create binary tree shown in above figure
    int level;
	cin>>level;
	Node* root = createTree();
    verticalOrder(root);

    return 0;
}
