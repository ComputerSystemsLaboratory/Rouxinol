#include<stdio.h>
#define MAX 250

typedef struct Node {
    int key;
    Node *parent, *left, *right;
} Node;

Node *NIL, T[MAX];

void print(int n) {
    int i;
    Node *N;
    for (i=1; i<=n; i++) {
        N = &T[i];
        printf("node %d: key = %d, ", i, N->key);
        if (N->parent!=NIL) printf("parent key = %d, ", N->parent->key);
        if (N->left!=NIL) printf("left key = %d, ", N->left->key);
        if (N->right!=NIL) printf("right key = %d, ", N->right->key);
        printf("\n");
    }
}

void fill(int i, int k) {
    if (i==1) {
        T[i].key=k;
    } else {
        T[i].key=k;
        T[i].parent=&T[i/2];
        if (i%2==0) T[i/2].left=&T[i];
        else T[i/2].right=&T[i];
    }
}

int main() {
    int n, i, k;
    for (i=0; i<MAX; i++) {
        T[i].parent=T[i].left=T[i].right=NIL;
        T[i].key=0;
    }

    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        scanf("%d", &k);
        fill(i, k);
    }
    
    print(n);

    return 0;
}
