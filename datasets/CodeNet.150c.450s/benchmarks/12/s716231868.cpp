#include<iostream>
using namespace std;
#define MAX 251

class Node
{
public:
	Node(int K,Node* PARENT)
	{
		key = K;
		parent = PARENT;
	}
	int key;
	Node* parent = 0;
	Node* right = 0;
	Node* left = 0;
};

class Tree
{
public:
	Tree() { for (int i = 0; i < MAX; i++) { nodes[i] = 0; } }
	Node* CreateNode(int ID, int K, Node* PARENT){return nodes[ID] = new Node(K,PARENT);}
	Node* node_root = 0;
	Node* nodes[MAX];
	void print()
	{
		for (int i = 1; i < MAX; i++)
		{
			if (nodes[i] == 0)break;
			cout << "node " << i << ": key = " << nodes[i]->key << ", ";
			if (nodes[i]->parent != 0)cout << "parent key = " << nodes[i]->parent->key << ", ";
			if(nodes[i]->left != 0)cout << "left key = " << nodes[i]->left->key << ", ";
			if(nodes[i]->right != 0)cout << "right key = " << nodes[i]->right->key << ", ";
			cout << endl;
		}
	}
};

int main()
{
	int n;
	cin >> n;
	Tree T;
	int k;
	cin >> k;
	T.node_root=T.CreateNode(1, k, 0);
	if (2 <= n)T.node_root->left = T.nodes[2];
	if (2 + 1 <= n)T.node_root->right = T.nodes[2 + 1];
	for (int i = 2; i <= n; i++)
	{
		cin >> k;
		Node* temp;
		temp=T.CreateNode(i, k, T.nodes[i / 2]);
	}	 	
	for (int i = 1; i <= n; i++)
	{
		if (i * 2 <= n)T.nodes[i]->left = T.nodes[i * 2];
		if (i * 2+1 <= n)T.nodes[i]->right = T.nodes[i * 2+1];
	}
	T.print();
	return 0;
}