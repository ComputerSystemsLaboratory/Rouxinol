#include<iostream>
#include<string>
using namespace std;

struct NodeC
{
	int id;
	int left, right;
};
void preOrder(NodeC nodes[],int rootId,int n)
{
	cout << " " << rootId;
	if (nodes[rootId].left != -1)
	{
		preOrder(nodes, nodes[rootId].left, n);
	}

	if (nodes[rootId].right != -1)
	{
		preOrder(nodes, nodes[rootId].right, n);
	}
}
void inOrder(NodeC nodes[], int rootId, int n)
{
	if (nodes[rootId].left != -1)
	{
		inOrder(nodes, nodes[rootId].left, n);
	}

	cout << " " << rootId;

	if (nodes[rootId].right != -1)
	{
		inOrder(nodes, nodes[rootId].right, n);
	}
}
void postOrder(NodeC nodes[], int rootId, int n)
{
	if (nodes[rootId].left != -1)
	{
		postOrder(nodes, nodes[rootId].left, n);
	}

	if (nodes[rootId].right != -1)
	{
		postOrder(nodes, nodes[rootId].right, n);
	}

	cout << " " << rootId;
}
void C()
{
	NodeC nodes[30];
	bool isRoot[30];
	int n;
	cin >> n;
	fill(isRoot, isRoot + n,true);
	for (int i = 0; i < n; i++)
	{
		int id, left, right;
		cin >> id >> left >> right;
		if (left != -1)isRoot[left] = false;
		if (right != -1)isRoot[right] = false;
		nodes[id].id = id;
		nodes[id].left = left;
		nodes[id].right = right;
	}

	int rootId = -1;
	for (int i = 0; i < n; i++)
	{
		if (isRoot[i])rootId = i;
	}
	cout << "Preorder" << endl;
	preOrder(nodes,rootId,n);
	cout << endl;
	cout << "Inorder" << endl;
	inOrder(nodes, rootId, n);
	cout << endl;
	cout << "Postorder" << endl;
	postOrder(nodes, rootId, n);
	cout << endl;
}
int main()
{
	C();
	return 0;
}