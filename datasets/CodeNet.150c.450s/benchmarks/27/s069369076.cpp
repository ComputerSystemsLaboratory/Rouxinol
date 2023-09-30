/*
 * ALDS1_8_A.cpp
 *
 *  Created on: May 2, 2018
 *      Author: 13743
 */

#include<cstdio>
#include<cstdlib>

struct Node {
	int key;
	Node *pa, *lc, *rc;
};

Node* root = NULL;

void insert(int k) {
	Node* y = NULL;
	Node* x = root;
	Node* z = new Node;
	while(x != NULL) {
		y = x;
		if(k < y->key) x = y->lc;
		else x = y->rc;
	}
	z->pa = y;
	z->lc = NULL;
	z->rc = NULL;
	z->key = k;
	if(y == NULL) {
		root = z;
	}
	else if(k < y->key) {
		y->lc = z;
	}
	else {
		y->rc = z;
	}
}

void preorder(Node* u) {
	if(u == NULL) return;
	printf(" %d", u->key);
	preorder(u->lc);
	preorder(u->rc);
}

void inorder(Node* u) {
	if(u == NULL) return;
	inorder(u->lc);
	printf(" %d", u->key);
	inorder(u->rc);
}

void print() {
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
}

int main() {
	int m;
	scanf("%d", &m);
	char s[100];
	int ke;
	for(int i=0; i<m; i++) {
		scanf("%s", s);
		if(s[0] == 'i') {
			scanf("%d", &ke);
			insert(ke);
		}
		else {
			print();
		}
	}
}


