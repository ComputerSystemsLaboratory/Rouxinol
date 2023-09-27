#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include<stdio.h>
using namespace std;


struct node {
	node* r, * l, * p;
	int key;

};
node* root, * NIL;

int box[10000] = {};
int t;

void insert(int k) {
	node* y = NIL;
	node* x = root;
	node* z;

	z = (node*)malloc(sizeof(node));
	z->key = k;
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
void search(node* u,int k) {
	if (u == NIL)return;
	if (k == u->key) {
		t = 1;
	}
	if (u->key > k) {
		search(u->l, k);
	}
	else {
		search(u->r, k);
	}
}

void preorder(node* u) {
	if (u == NIL)return;
	printf(" %d", u->key);
	preorder(u->l);
	preorder(u->r);
}


void inorder(node* u) {
	if (u == NIL)return;
	inorder(u->l);
	printf(" %d", u->key);
	inorder(u->r);
}


int main() {
	int n, i, y;
	string ord;

	scanf("%d", &n);
	//scanf_s("%d", &n);

	for (i = 0;i < n;i++) {
		cin >> ord;
		if (ord == "insert") {
			scanf("%d", &y);
			//scanf_s("%d", &y);
			insert(y);
		}
		if (ord == "find") {
			scanf("%d",&y);
			//scanf_s("%d", &y);
			t = 0;
			search(root,y);
			if (t == 0) {
				printf("no\n");
			}
			else {
				printf("yes\n");
			}

		}
		if (ord == "print") {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}

	}
	return 0;
}
