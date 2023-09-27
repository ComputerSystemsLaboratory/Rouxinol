#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>

using namespace std;

#define NIL -1
#define MAX 26

struct Node {
    int id;
    int parent;
    int left;
    int right;
};

Node T[MAX];

void preOrderTreeWalk(int u) {
    if (u == NIL) {
	return;
    }
    printf(" %d", u);
    preOrderTreeWalk(T[u].left);
    preOrderTreeWalk(T[u].right);
}

void inOrderTreeWalk(int u) {
    if (u == NIL) {
	return;
    }
    inOrderTreeWalk(T[u].left);
    printf(" %d", u);
    inOrderTreeWalk(T[u].right);
}

void postOrderTreeWalk(int u) {
    if (u == NIL) {
	return;
    }
    postOrderTreeWalk(T[u].left);
    postOrderTreeWalk(T[u].right);
    printf(" %d", u);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; scanf("%d", &n);
    int id, left, right,root;

    for (int i = 0; i < n; i++) {
	T[i].id = i;
	T[i].parent = NIL;
    }
    for (int i = 0; i < n; i++) {
	scanf("%d %d %d", &id, &left, &right);
	T[id].left = left;
	T[id].right = right;
	if (T[id].left != NIL) {
	    T[T[id].left].parent = id;
	}
	if (T[id].right != NIL) {
	    T[T[id].right].parent = id;
	}
    }

    for (int i = 0; i < n; i++) {
	if (T[i].parent == NIL) {
	    root = i;
	}
    }

    printf("Preorder\n");
    preOrderTreeWalk(root); printf("\n");
    printf("Inorder\n");
    inOrderTreeWalk(root); printf("\n");
    printf("Postorder\n");
    postOrderTreeWalk(root); printf("\n");
}