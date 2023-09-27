#include <iostream>

#define NIL -1

using namespace std;

struct Node
{
	int parent;
	int lchild;
	int rchild;
};

void init_tree(Node T[], int n);
void preorder(Node T[], int n);
void inorder(Node T[], int n);
void postorder(Node T[], int n);
void preorder_rec(Node T[], int root);
void inorder_rec(Node T[], int root);
void postorder_rec(Node T[], int root);

int main()
{
	int n;
	cin >>n;
	
	Node * T = new Node [n];
	
	init_tree(T, n);
	
	preorder(T, n);
	
	inorder(T, n);
	
	postorder(T, n);
	
	return 0;
}



void init_tree(Node T[], int n)
{
	
	int ID, k;
	
	for (int i = 0; i < n; i++) T[i].parent = NIL;
	
	for (int i = 0; i < n; i++)
	{
		int ID, lcld, rcld;
		cin >> ID >> lcld >> rcld;
		T[ID].lchild = lcld;
	 	T[ID].rchild = rcld;
		
		if (lcld != NIL) T[lcld].parent = ID;
		if (rcld != NIL) T[rcld].parent = ID;		
	}	
}


void preorder(Node T[], int n)
{
	int root = 0;	
	if (n == 0) return;
	
	cout << "Preorder" <<endl;
	while (T[root].parent != NIL) root = T[root].parent;
	preorder_rec(T, root);
	cout << endl;
}

void preorder_rec(Node T[], int root)
{
	if (root == NIL) return;
	cout << ' ' << root;
 	preorder_rec(T, T[root].lchild);
 	preorder_rec(T, T[root].rchild);
}

void inorder(Node T[], int n)
{
	int root = 0;	
	if (n == 0) return;

	cout << "Inorder" << endl;
	while (T[root].parent != NIL) root = T[root].parent;
	inorder_rec(T, root);
	cout << endl;
}

void inorder_rec(Node T[], int root)
{
	if (root == NIL) return;
 	inorder_rec(T, T[root].lchild);
	cout << ' ' << root;
 	inorder_rec(T, T[root].rchild);
}

void postorder(Node T[], int n)
{
	int root = 0;	
	if (n == 0) return;
	
	cout << "Postorder" << endl;
	while (T[root].parent != NIL) root = T[root].parent;
	postorder_rec(T, root);
	cout << endl;
}

void postorder_rec(Node T[], int root)
{
	if (root == NIL) return;
 	postorder_rec(T, T[root].lchild);
 	postorder_rec(T, T[root].rchild);
	cout << ' ' << root;
}
