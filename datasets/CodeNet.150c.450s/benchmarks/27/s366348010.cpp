#include <iostream>
#include <algorithm>
#include <string>
typedef long long ll;
using namespace std;


typedef struct Node {
	int key;
	Node *parent, *lchild, *rchild;
	Node(int k, Node *p = NULL, Node *l = NULL, Node *r = NULL) : key(k), parent(p), lchild(l), rchild(r) {}
} *Tree;

void insert(Tree& T,  int k)
{
	Tree p = NULL;
	Tree x = T;
	Tree z;
	while (x != NULL)
	{
		p = x;
		if (x->key > k)
			x = x->lchild;
		else
			x = x->rchild;
	}
	z = new Node(k, p);
	if (p == NULL)
	{
		T = z;
	}
	else if (z->key > p->key)
		p->rchild = z;
	else
		p->lchild = z;
}

void preorder(Tree T)
{
	if (T == NULL)
		return;
	cout << ' ' << T->key;
	preorder(T->lchild);
	preorder(T->rchild);
}

void inorder(Tree T)
{
	if (T == NULL)
		return;
	inorder(T->lchild);
	cout << ' ' << T->key;
	inorder(T->rchild);
}

void Print(Tree T)
{
	inorder(T);
	cout << endl;
	preorder(T);
	cout << endl;
}

int main()
{
	int n, key;
	char op[10];
	Tree T = NULL;
	Tree *temp;

	cin >> n;
	while (n--)
	{
		cin >> op;
		if (op[0] == 'i')
		{
			cin >> key;			
			insert(T, key);
		}
		else
			Print(T);
	}

	return 0;
}