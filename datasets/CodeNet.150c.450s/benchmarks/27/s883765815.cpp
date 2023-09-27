#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

using namespace std;

struct Node {
	int left;
	int right;
};

Node T[500000];
int root = -1;

void printInOrder(int i) {
	if (i == -1) {
		return;
	}
	printInOrder(T[i].left);
	printf(" %d", i);
	printInOrder(T[i].right);
}

void printPreOrder(int i) {
	if (i == -1) {
		return;
	}
	printf(" %d", i);
	printPreOrder(T[i].left);
	printPreOrder(T[i].right);
}

void insert(int i) {
	T[i].left = T[i].right = -1;

	if (root == -1) {
		root = i;
		return;
	}

	int y;
	int x = root;
	while (x != -1) {
		y = x;
		if (i < x) {
			x = T[x].left;
		}
		else {
			x = T[x].right;
		}
	}
	if (i < y) {
		T[y].left = i;
	}
	else {
		T[y].right = i;
	}
}

int main() {
	int m;
	scanf("%d", &m);

	char s[19];
	for (int i = 0; i < m; i++) {
		scanf("%s", s);

		if (s[0] == 'i') {
			scanf("%s", s);
			insert(atoi(s));
		}
		else {
			printInOrder(root);
			printf("\n");
			printPreOrder(root);
			printf("\n");
		}
	}

	return 0;
}