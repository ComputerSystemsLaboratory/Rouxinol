#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>

using namespace std;

struct Node {
	int parent;
	int left;
	int right;
};

Node T[25];

void pre(int node) {
	if (node == -1) {
		;
	}
	else {
		printf(" %d", node);
		pre(T[node].left);
		pre(T[node].right);
	}
}

void printPre(int root) {
	printf("Preorder\n");
	pre(root);
	printf("\n");
}

void in(int node) {
	if (node == -1) {
		;
	}
	else {
		in(T[node].left);
		printf(" %d", node);
		in(T[node].right);
	}
}

void printIn(int root) {
	printf("Inorder\n");
	in(root);
	printf("\n");
}

void post(int node) {
	if (node == -1) {
		;
	}
	else {
		post(T[node].left);
		post(T[node].right);
		printf(" %d", node);
	}
}

void printPost(int root) {
	printf("Postorder\n");
	post(root);
	printf("\n");
}


int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		T[i].parent = -1;
	}

	for (int i = 0; i < n; ++i) {
		int id;
		scanf("%d", &id);
		int left, right;
		scanf("%d%d", &left, &right);
		T[id].left = left;
		T[id].right = right;
		if (left != -1) {
			T[left].parent = id;
		}
		if (right != -1) {
			T[right].parent = id;
		}
	}

	int root;
	for (int i = 0; i < n; ++i) {
		if (T[i].parent == -1) {
			root = i;
		}
	}

	printPre(root);
	printIn(root);
	printPost(root);

	return 0;
}