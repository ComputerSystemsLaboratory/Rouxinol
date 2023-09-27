#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

using namespace std;


int key[500000];
int left[500000];
int right[500000];
int root = -1;
int numOfNodes = 0;

void printInOrder(int i) {
	if (i == -1) {
		return;
	}
	printInOrder(left[i]);
	printf(" %d", key[i]);
	printInOrder(right[i]);
}

void printPreOrder(int i) {
	if (i == -1) {
		return;
	}
	printf(" %d", key[i]);
	printPreOrder(left[i]);
	printPreOrder(right[i]);
}

void insert(int k) {
	if (root == -1) {
		root = 0;
		key[root] = k;
		left[root] = -1;
		right[root] = -1;
		++numOfNodes;
		return;
	}

	int y;
	int x = root;
	while (x != -1) {
		y = x;
		if (k < key[x]) {
			x = left[x];
		}
		else {
			x = right[x];
		}
	}

	key[numOfNodes] = k;
	left[numOfNodes] = -1;
	right[numOfNodes] = -1;

	if (k < key[y]) {
		left[y] = numOfNodes++;
	}
	else {
		right[y] = numOfNodes++;
	}
}

void find(int k) {
	if (root == -1) {
		printf("no\n");
		return;
	}

	int x = root;
	while (x != -1) {
		if (k == key[x]) {
			printf("yes\n");
			return;
		}
		else if (k < key[x]) {
			x = left[x];
		}
		else {
			x = right[x];
		}
	}
	printf("no\n");
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
		else if (s[0] == 'f') {
			scanf("%s", s);
			find(atoi(s));
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