#include<stdio.h>
#define MAX 500001

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

void maxHeapify(int i) {
    int j=0, k;
    Node *largest = &T[i];
    Node *l = T[i].left;
    Node *r = T[i].right;
    if (l!=NIL && l->key > T[i].key) {
        largest=l;
        j=2*i;
    }
    if (r!=NIL && r->key > largest->key) {
        largest=r;
        j=2*i+1;
    }

    if (largest!=&T[i]) {
        k = largest->key;
        T[j].key = T[i].key;
        T[i].key = k;
        maxHeapify(j);
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
    
    for (i=n; i>=1; i--) {
        maxHeapify(i);
    }
    
    for (i=1; i<=n; i++) {
        printf(" %d", T[i].key);
    }
    printf("\n");

    return 0;
}
