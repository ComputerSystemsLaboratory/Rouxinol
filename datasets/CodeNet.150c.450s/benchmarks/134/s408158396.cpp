#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

const int kSize = 25;

struct Node {
    int parent = -1;
    int left, right;
};

Node tree[kSize];

void PreOrder(int root) {
    if (root == -1) {
        return;
    }

    printf(" %d", root);
    PreOrder(tree[root].left);
    PreOrder(tree[root].right);
}

void InOrder(int root) {
    if (root == -1) {
        return;
    }

    InOrder(tree[root].left);
    printf(" %d", root);
    InOrder(tree[root].right);
}

void PostOrder(int root) {
    if (root == -1) {
        return;
    }

    PostOrder(tree[root].left);
    PostOrder(tree[root].right);
    printf(" %d", root);
}

int FindRoot(int n) {
    for (int i = 0; i < n; ++i) {
        if (tree[i].parent == -1) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int id, left, right;
        scanf("%d %d %d", &id, &left, &right);
        tree[id].left = left;
        tree[id].right = right;
        if (left != -1) {
            tree[left].parent = id;
        }
        if (right != -1) {
            tree[right].parent = id;
        }
    }

    int root = FindRoot(n);

    printf("Preorder\n");
    PreOrder(root);
    printf("\n");

    printf("Inorder\n");
    InOrder(root);
    printf("\n");

    printf("Postorder\n");
    PostOrder(root);
    printf("\n");

    return 0;
}

