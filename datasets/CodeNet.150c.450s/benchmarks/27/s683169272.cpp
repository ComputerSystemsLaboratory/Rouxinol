#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct node
{
	int key;
	node *left;
	node *right;
};

node nil;
node *root = &nil;

void init()
{
	nil.left = &nil;
	nil.right = &nil;
}

void insert(int key)
{
	node *newNode = (node *)malloc(sizeof(node));
	newNode->key = key;
	newNode->left = &nil;
	newNode->right = &nil;

	node *tmp = &nil;
	node *iter = root;
	while(iter != &nil)
	{
		tmp = iter;

		if (newNode->key < iter->key)
		{
			iter = iter->left;
		}
		else
		{
			iter = iter->right;
		}
	}
	//empty tree
	if (tmp == &nil)
		root = newNode;
	else if (newNode->key < tmp->key)
		tmp->left = newNode;
	else
		tmp->right = newNode;
}

void inorder(node *t)
{
	if (t == &nil)
		return;
	inorder(t->left);
	cout << " " << t->key;
	inorder(t->right);
}

void preorder(node *t)
{
	if (t == &nil)
		return;
	cout << " " << t->key;
	preorder(t->left);
	preorder(t->right);
}

int main()
{
	int n;
	cin >> n;
	init();

	for (int i = 0; i < n; i++)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "insert")
		{
			int key;
			cin >> key;
			insert(key);
		}
		else if(cmd == "print"){
			inorder(root);
			cout << endl;

			preorder(root);
			cout << endl;
		}
	}
}
