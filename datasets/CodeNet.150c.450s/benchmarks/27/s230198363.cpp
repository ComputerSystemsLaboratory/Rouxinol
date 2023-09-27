#include <iostream>
#include <queue>

using namespace std;

#define NIL -1

struct Node { int parent, left, right, key; };
Node tree[500001];
int treesize;
int root = NIL;

void in(int id)
{
	if (id == NIL) return;
	cout << " " << tree[id].key;
	in(tree[id].left);
	in(tree[id].right);
}

void pre(int id) 
{
	if (id == NIL) return;
	pre(tree[id].left);
	cout << " " << tree[id].key;
	pre(tree[id].right);
}

void insert(int key)
{
	int y = NIL;
	int x = root;
	while (x != NIL)
	{
		y = x;
		if (key < tree[x].key) x = tree[x].left;
		else x = tree[x].right;
	}
	tree[treesize].parent = y;

	if (y == NIL) root = treesize;
	else if (key < tree[y].key) tree[y].left = treesize;
	else tree[y].right = treesize;
	
	tree[treesize].left = NIL; 
	tree[treesize].right = NIL; 
	tree[treesize].key = key;
	
	treesize++;
}


int main(void)
{
	int n;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		cin >> str;

		if (str == "insert") 
		{
			int key;
			cin >> key;
			insert(key);
		}
		else if(str == "print")
		{
			pre(root);
			cout << endl;
			in(root);
			cout << endl;
		}
	}

	return 0;
}