#include <cstdio>
using namespace std;

struct Node {
	Node *parent;
	Node *left;
	Node *right;
	int key;
};

Node *NIL = NULL;

void preorder(Node *v) {
	if (v == NIL) return;
	printf(" %d", v->key);
	preorder(v->left);
	preorder(v->right);
}

void inorder(Node* v) {
	if (v == NIL) return;
	inorder(v->left);
	printf(" %d", v->key);
	inorder(v->right);
}

void postorder(Node* v) {
	if (v == NIL) return;
	postorder(v->left);
	postorder(v->right);
	printf(" %d", v->key);
}

void insert(Node* &T, Node *z) {
	Node *y = NIL;
	Node *x = T;
	while (x != NIL) {
		y = x;
		if (z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;

	if (y == NIL)
		T = z;
	else if (z->key < y->key)
		y->left = z;
	else
		y->right = z;
}

bool find(Node* T, int key) {
	Node *x = T;
	if (x == NIL) return false;
	if (x->key == key)
		return true;
	else if (key < x->key)
		return find(x->left, key);
	else
		return find(x->right, key);
}


int main()
{
	int n;
	scanf("%d", &n);

	Node *T = NIL;
	for (int i = 0; i < n; ++i) {
		char cmd[20];
		int v;
		scanf("%s", cmd);
		if (cmd[0] == 'i') {
			scanf("%d", &v);
			Node *p = new Node;
			p->key = v;
			p->left = NIL;
			p->right = NIL;
			insert(T, p);
		} else if (cmd[0] == 'f') {
			scanf("%d", &v);
			printf("%s\n", find(T, v) ? "yes" : "no");
		} else if (cmd[0] == 'p') {
			inorder(T);
			printf("\n");
			preorder(T);
			printf("\n");
		}
	}

	return 0;
}