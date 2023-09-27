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
bool Find(Node *u, int t);
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
		else if(s == "find"){
			cin >> t;
			if(Find(root, t)) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}
void insert(int t){
	Node *z, *y = NIL, *x = root;
	z = (Node *)malloc(sizeof(Node));//神奇了 ,不加不行？？？？？？ 
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
bool Find(Node *u, int t){
	if(u == NIL) return false;
	if(t == u -> key) return true;
	else if(t > u -> key) return Find(u -> right, t);
	else return Find(u -> left, t);
}







 
