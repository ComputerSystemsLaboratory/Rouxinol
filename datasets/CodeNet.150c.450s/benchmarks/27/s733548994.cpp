#include<bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	Node *parent, *left, *right;
};
Node *root, *NIL;
void insert(int x);
void Inorder(Node *u);
void Preorder(Node *u);
int main()
{
	int n, t;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		if(s == "insert"){
			cin >> t;
			insert(t);
		}
		else if(s == "print"){
			Inorder(root);
			printf("\n");
			Preorder(root);
			printf("\n");
		}
	}
	return 0;
}
void insert(int t){
	Node *z, *y = NIL, *x = root;
	z = (Node *)malloc(sizeof(Node));//神奇了 
	z -> key = t;
	z -> left = NIL;
	z -> right = NIL;
	while(x != NIL){
		y = x;
		if(t < x -> key){
			x = x -> left;
		}
		else x = x -> right;
	}
	z -> parent = y;
	if(y == NIL) root = z;
	else{
		if(t < y -> key) y -> left = z;
		else y -> right = z;
	}
}

void Inorder(Node *u){
	if(u == NIL) return;
	Inorder(u -> left);
	printf(" %d", u -> key);
	Inorder(u -> right);
}

void Preorder(Node *u){
	if(u == NIL) return;
	printf(" %d", u -> key);
	Preorder(u -> left);
	Preorder(u -> right);
}













