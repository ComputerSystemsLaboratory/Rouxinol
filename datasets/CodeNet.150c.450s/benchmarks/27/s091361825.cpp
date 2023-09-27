#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct Node
{
	int key;
	Node *parent, *left, *right; 
};

Node *root, *NIL;

void insert(Node *z)
{
	Node *x = root;	//current node.
	Node *y = NIL; //current node's parrent node.

	while(x != NIL) //first time root == NIL?
	{
		y = x;
		if(z->key < x->key)
		{
			x = x->left;
		}
		else
		{
			x = x->right;
		}
	}
	z->parent = y;
	
	if(y == NIL) root = z;
	else if(z->key < y->key)
	{
		y->left = z;
	}
	else
	{
		y->right = z;
	}
}

void preParse(Node *u)
{
	if(u == NIL) return;
	cout << " " << u->key;
	preParse(u->left);
	preParse(u->right);
}


void inParse(Node *u)
{
	if(u == NIL) return;
	inParse(u->left);
	cout << " " << u->key;
	inParse(u->right);
}

void print()
{
	inParse(root);
	cout << endl;
	preParse(root);
	cout << endl;
}

int main(){

//	char S[10];  // is this one ok?
	string s;
	int k;
	int m;
	
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		cin >> s;
		if(s == "insert")
		{
			cin >> k;
			
			Node *z = new Node;	//delete?
//			z = (new *)malloc(sizeof(Node));
			z->key = k;
			z->left = NIL;
			z->right = NIL;
			
			insert(z);
//			delete z;
		} 
		else if(s == "print") print();
	}
	

//	system("pause");
	return 0;
}
