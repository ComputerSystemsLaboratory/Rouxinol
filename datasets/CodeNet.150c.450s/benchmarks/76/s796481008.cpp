#include <iostream>
#include <string>

#define NIL -1

using namespace std;

struct Node
{
	int key;
	Node * parent, * lchild, * rchild;
};


void insert(Node * &T, int key);
void insert_rec(Node * &T, int key);
void print(Node * T);
void inorder(Node * T);
void preorder(Node * T);
void find_rec(Node * T, int key);
void find(Node * T, int key);



int main()
{
	int n;
	Node * T = NULL;
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string cmd;
		
		cin >> cmd;
		if (cmd == "insert")
		{
			int key;
			cin >> key;
			insert_rec(T, key);
			
		}
		else if (cmd == "print")
		{
			print(T);
		}
		else if (cmd == "find")
		{
			int key;
			cin >> key;
			find_rec(T, key);
		}
	}
}


void insert(Node * &T, int key)
{
	Node * p = new Node;
	p->key = key;
	p->lchild = p->rchild = NULL;
	
	if (T == NULL) T = p;
	else
	{
		Node * q = NULL, * r = T;
		while (r != NULL)
		{
			q = r;
			if (p->key < r->key)
				r = r->lchild;
			else 
				r = r->rchild;
		}
	
		if (p->key < q->key)
			q->lchild = p;
		else
			q->rchild = p;
	}
}


void insert_rec(Node * &T, int key)
{
	if (T == NULL)
	{
		Node * p = new Node;
		p->key = key;
		p->lchild = p->rchild = NULL;
		T = p;
	}
	else if (key < T->key)
		insert_rec(T->lchild, key);
	else
		insert_rec(T->rchild, key);
}


void print(Node * T)
{
	inorder(T);
	cout<< endl;
	preorder(T);
	cout << endl;
}


void inorder(Node * T)
{
	if (T == NULL) return;
	inorder(T->lchild);
	cout << ' ' << T->key;
	inorder(T->rchild);
}


void preorder(Node * T)
{
	if (T == NULL) return;
	cout << ' ' << T->key;	
	preorder(T->lchild);
	preorder(T->rchild);
}


void find_rec(Node * T, int key)
{
	if (T == NULL)
		cout << "no" << endl;
	else if (key == T->key)
		cout << "yes" << endl;
	else if (key < T->key)
		find_rec(T->lchild, key);
	else
		find_rec(T->rchild, key);
}


void find(Node * T, int key)
{
	
}
