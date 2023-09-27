#include <iostream>
#include <stdio.h>

#define MAX 100
#define NIL -1

struct Node {
    int parent, left, right;
};

int n;
Node T[MAX];

void preorder(int id) {
    if (id == NIL) return;
    
    printf(" %d", id);
    preorder(T[id].left);
    preorder(T[id].right);
}

void inorder(int id) {
    if (id == NIL) return;
    
    inorder(T[id].left);
    printf(" %d", id);
    inorder(T[id].right);
}

void postorder(int id) {
    if (id == NIL) return;
    
    postorder(T[id].left);
    postorder(T[id].right);
    printf(" %d", id);
}

int main() {
    int id, left, right;
    int root = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        T[i].parent = T[i].left = T[i].right = NIL;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &id, &left, &right);
        T[id].left = left;
        T[id].right = right;
        if (left != NIL) T[left].parent = id;
        if (right != NIL) T[right].parent = id;
    }
    
    for (int i = 0; i < n; i++) {
        if (T[i].parent == NIL) root = i;
    }
    
    printf("Preorder\n");
    preorder(root);
    printf("\nInorder\n");
    inorder(root);
    printf("\nPostorder\n");
    postorder(root);
    printf("\n");
    
    return 0;
}