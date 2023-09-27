#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i < (int)n; i++)
#define Loopr(i, n) for(int i= (int)n - 1; i >= 0; i--)
using namespace std;
typedef long long int ll;


struct node {
	int key;
	node *left, *right, *parent;
};

node* NIL = (node*)malloc(sizeof(node));
node  *root, *n_i, *n_i2, *n_f;
int k;

void insert(node* *focus) {
	if (*focus == NIL) {
		node* buf = (node*)malloc(sizeof(node));
		buf->key = k;
		buf->left = NIL;
		buf->right = NIL;
		buf->parent = n_i;
		*focus = buf;
	}
	else if (k < (*focus)->key) {
		n_i = (*focus);
		insert(&((*focus)->left));
	}
	else {
		n_i = (*focus);
		insert(&((*focus)->right));
	}
}

void fnd(node *focus) {
	if (focus->key == k) {
		printf("yes\n");
	}
	else if (focus == NIL) printf("no\n");
	else {
		if (k < focus->key) fnd(focus->left);
		else fnd(focus->right);
	}
}

void fnd2(node *focus) {
	if (focus->key == k) {
		n_f = focus;
	}
	else if (focus == NIL) return;
	else {
		if (k < focus->key) fnd2(focus->left);
		else fnd2(focus->right);
	}
}

void insert2(node* *focus) {
	cout << "inserting focus = " << (*focus)->key << endl;
	if (*focus == NIL) {
		n_i2->parent = n_i;
		*focus = n_i2;
	}
	else if (n_i2->key < (*focus)->key) {
		n_i = (*focus);
		insert2(&((*focus)->left));
	}
	else {
		n_i = (*focus);
		insert2(&((*focus)->right));
	}
}

void del() {
	fnd2(root);
	if (n_f->left == NIL&&n_f->right == NIL) {
		if (n_f == root) root = NIL;
		else {
			if (n_f->key < n_f->parent->key) n_f->parent->left = NIL;
			else n_f->parent->right = NIL;
		}
	}
	else {
		if (n_f == root) {
			if (n_f->left != NIL) {
				root = n_f->left;
				if (n_f->right != NIL) {
					n_i2 = n_f->right;
					insert2(&root);
				}
			}
			else {
				root = n_f->right;
			}
			root->parent = NIL;
		}
		else {
			if (n_f->key < n_f->parent->key) {
				if (n_f->left != NIL) {
					n_f->parent->left = n_f->left;
					n_f->parent->left->parent = n_f->parent;
				}
				if (n_f->right != NIL) {
					n_i2 = n_f->right;
					n_f->parent->right = NIL;
					insert2(&root);
				}
			}
			else {
				if (n_f->right != NIL) {
					n_f->parent->right = n_f->right;
					n_f->parent->right->parent = n_f->parent;
				}
				if (n_f->left != NIL) {
					n_i2 = n_f->left;
					n_f->parent->left = NIL;
					insert2(&root);
				}
			}
		}
	}
	if (n_f != NIL) free(n_f);
}

void print_in(node* focus) {
	if (focus == NIL) return;
	print_in(focus->left);
	printf(" %d", focus->key);
	print_in(focus->right);
}

void print_pre(node* focus) {
	if (focus == NIL) return;
	printf(" %d", focus->key);
	print_pre(focus->left);
	print_pre(focus->right);
}

void print() {
	print_in(root);
	printf("\n");
	print_pre(root);
	printf("\n");
}

int main() {
	int m;
	root = NIL;
	n_i = NIL;
	cin >> m;
	char query[10];
	Loop(i, m) {
		scanf("%s", query);
		if (query[0] == 'i') {
			scanf("%d", &k);
			insert(&root);
		}
		else if (query[0] == 'f') {
			scanf("%d", &k);
			fnd(root);
		}
		else if (query[0] == 'd') {
			scanf("%d", &k);
			del();
		}
		else print();
	}
	return 0;
}