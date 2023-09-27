#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
//#define MAX 500010
//#define NIL -1
using namespace std;

struct Node {
	int key;

	Node* r, * l, * p;
};

Node* root, * NIL;


void insert(int ke) {
	Node* y = NIL;
	Node* x = root;
	Node* z;

	z = (Node*)malloc(sizeof(Node));

	z->key = ke;
	z->l = NIL;
	z->r = NIL;

	while (x != NIL) {
		y = x;

		if (z->key < x->key) {
			x = x->l;
		}
		else {
			x = x->r;
		}
	}


	z->p = y;

	if (y == NIL) {
		root = z;
	}
	else {
		if (z->key < y->key) {
			y->l = z;
		}
		else {
			y->r = z;
		}
	}
}

Node* find(Node* q,int ke) {
	while (q != NIL && ke != q->key) {
		if (ke < q->key) {
			q = q->l;
		}
		else {
			q = q->r;
		}
	}

	return q;
}

void inorder(Node* u) {
	if (u == NIL) {
		return;
	}

	inorder(u->l);
	printf(" %d", u->key);
	inorder(u->r);
}


void preorder(Node* u) {//先行順巡回
	if (u == NIL) {
		return;
	}
	printf(" %d", u->key);
	preorder(u->l);
	preorder(u->r);
}


int main() {
	int n, i, x;
	string com;

	//scanf_s("%d", &n);
	scanf("%d", &n);
	//cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> com;

		if (com[0] == 'f') {
			//scanf_s("%d", &x);
			scanf("%d", &x);
			//cin >> x;

			Node *t = find(root, x);

			if (t != NIL) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
		else if (com == "insert") {
			//scanf_s("%d", &x);
			scanf("%d", &x);
			//cin >> x;
			insert(x);
		}
		else if (com == "print") {
			inorder(root);
			//cout << endl;
			printf("\n");
			preorder(root);
			//cout << endl;
			printf("\n");
		}

	}

	return 0;
}






