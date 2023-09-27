#include <iostream>
#include <stdio.h>

#define MAX 100
#define NIL -1

struct Node {
    int parent;
    int left;
    int right;
};

Node T[MAX];
int n;

// preorder
void preorder(int id) {
    if (id == NIL) return;
    
    printf(" %d", id);
    preorder(T[id].left);
    preorder(T[id].right);
}

// inorder
void inorder(int id) {
    if (id == NIL) return;
    
    inorder(T[id].left);
    printf(" %d", id);
    inorder(T[id].right);
}

// postorder
void postorder(int id) {
    if (id == NIL) return;
    
    postorder(T[id].left);
    postorder(T[id].right);
    printf(" %d", id);
}

int main() {
    int id;
    int root = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        T[i].parent = T[i].left = T[i].right = NIL;
    }
    
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &id);
        scanf("%d %d", &T[id].left, &T[id].right);
        if (i == 0) T[id].parent = NIL;
        if (T[id].left != NIL) T[T[id].left].parent = id;
        if (T[id].right != NIL) T[T[id].right].parent = id;
    }
    
    for (int i = 0; i < n; i++) {
        if (T[i].parent == NIL) root = i;
    }
    
    printf("Preorder\n");
    preorder(root);
    printf("\n");
    printf("Inorder\n");
    inorder(root);
    printf("\n");
    printf("Postorder\n");
    postorder(root);
    printf("\n");
    
    return 0;
}