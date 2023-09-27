#include <iostream>
using namespace std;
const int MAX = 100;
const int NIL = -1;

struct Node
{
	int pa;
	int left;
	int right;
};

Node Tree[MAX];
int root = 0;

void print_pre(int r);
void print_in(int r);
void print_post(int r);

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		Tree[i].pa = Tree[i].left = Tree[i].right = NIL;
	}

	for (int i = 0; i < n; i++)
	{
		int num, l, r;
		cin >> num >> l >> r;
		Tree[num].left = l;
		Tree[num].right = r;
		if (l != NIL)
			Tree[l].pa = num;
		if (r != NIL)
			Tree[r].pa = num;
	}

	
	for (int i = 0; i < n; i++)
	{
		if (Tree[i].pa == NIL)
		{
			root = i;
			break;
		}
	}


	cout << "Preorder" << endl;
	print_pre(root);
	cout << endl;

	cout << "Inorder" << endl;
	print_in(root);
	cout << endl;

	cout << "Postorder" << endl;
	print_post(root);
	cout << endl;

// 	int junk;
// 	cin >> junk;
	return 0;
}

void print_pre(int r)
{
	cout << " " << r;
	if (Tree[r].left != NIL)
		print_pre(Tree[r].left);
	if (Tree[r].right != NIL)
		print_pre(Tree[r].right);
	return;
}

void print_in(int r)
{
	if (Tree[r].left != NIL)
		print_in(Tree[r].left);

	cout << " " << r;

	if (Tree[r].right != NIL)
		print_in(Tree[r].right);
	return;
}

void print_post(int r)
{
	if (Tree[r].left != NIL)
		print_post(Tree[r].left);
	if (Tree[r].right != NIL)
		print_post(Tree[r].right);

	cout << " " << r;
	return;
}