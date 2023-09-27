#include <cstdio>
#define NIL -1

struct Node {
    int parent, left, right;
};

Node *T;

void prePerse(int u) {
    if (u == NIL) { return; }
    printf(" %d", u);
    prePerse(T[u].left);
    prePerse(T[u].right);
}

void inPerse(int u) {
    if (u == NIL) { return; }
    inPerse(T[u].left);
    printf(" %d", u);
    inPerse(T[u].right);    
}

void postPerse(int u) {
    if (u == NIL) { return; }
    postPerse(T[u].left);
    postPerse(T[u].right);
    printf(" %d", u);  
}

int main() {
    int n;
    scanf("%d", &n);

    T = new Node[n];

    // initialize tree
    for (int i = 0; i < n; i++) {
        T[i].parent = T[i].left = T[i].right = NIL;
    }

    for (int i = 0; i < n; i++) {
        int v, left, right;
        scanf("%d %d %d", &v, &left, &right);
        T[v].left = left;
        T[v].right = right;
        if (left != NIL) { T[left].parent = v; }
        if (right != NIL) { T[right].parent = v; }
    }

    int root;
    for (int i = 0; i < n; i++) {
        if (T[i].parent == NIL) {
            root = i;
            break;
        }
    }
    printf("Preorder\n");
    prePerse(root);
    printf("\n");
    printf("Inorder\n");
    inPerse(root);
    printf("\n");
    printf("Postorder\n");
    postPerse(root);
    printf("\n");

    return 0;
}
