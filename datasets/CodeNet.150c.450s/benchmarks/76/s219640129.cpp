#include<stdio.h>
#include<iostream>
#include<string>

#define MAX 500000

struct node {
	int key;
	int parent, left, right;
} T[MAX];
int root;

void PrePrint(int t) {
	if (t == -1) return;
	printf(" %d", T[t].key);
	PrePrint(T[t].left);
	PrePrint(T[t].right);
}

void InPrint(int t) {
	if (t == -1) return;
	InPrint(T[t].left);
	printf(" %d", T[t].key);
	InPrint(T[t].right);
}

void initNode(int n) {
	root = -1;
	for (int i = 0; i < n; i++) {
		T[i].key = -1;
		T[i].parent = -1;
		T[i].left = -1;
		T[i].right = -1;
	}
}

void insert(int z) {
	int y = -1; // xの親
	int x = root;
	while (x != -1) {
		y = x;
		if (T[z].key < T[x].key) x = T[x].left;
		else x = T[x].right;
	}
	T[z].parent = y;

	if (y == -1) root = z;
	else if (T[z].key < T[y].key) T[y].left = z;
	else T[y].right = z;
}

bool find(int k) {
	int x = root;
	while (x != -1) {
		if (T[x].key == k) return true;
		if (T[x].key < k) x = T[x].right;
		else x = T[x].left;
	}
	return false;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	initNode(n);
	for (int i = 0; i < n; i++) {
		std::string com;
		std::cin >> com;
		if (com[0] == 'i') {
			int k = 0;
			scanf("%d", &k);
			T[i].key = k;
			insert(i);
		}
		else if (com[0] == 'p') {
			InPrint(root);
			printf("\n");
			PrePrint(root);
			printf("\n");
		}
		else if (com[0] == 'f') {
			int k = 0;
			scanf("%d", &k);
			if (find(k)) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
	}
}

