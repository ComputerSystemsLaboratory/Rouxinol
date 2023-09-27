#include <iostream>
#include<stdio.h>
#define MAX 25
#define NIL -1

using namespace std;

struct Node {
    int parent, left, right;
};
Node T[MAX];

void preParse(int u) {
    if(u == NIL) return;
    printf(" %d", u);
    preParse(T[u].left);
    preParse(T[u].right);
}

void inParse(int u) {
    if(u == NIL) return;
    inParse(T[u].left);
    printf(" %d", u);
    inParse(T[u].right);
}

void postParse(int u) {
    if(u == NIL) return;
    postParse(T[u].left);
    postParse(T[u].right);
    printf(" %d", u);
}

int main()
{
    int n, Root;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) T[i].parent = NIL;

    int v, l ,r;
    for(int i = 0; i < n; i++) {
        scanf("%d%d%d", &v, &l, &r);
        T[v].left = l;
        T[v].right = r;
        if(l != NIL) T[l].parent = v;
        if(r != NIL) T[r].parent = v;
    }

    for(int i = 0; i < n; i++) {
        if(T[i].parent == NIL) {
            Root = i;
            break;
        }
    }

    printf("Preorder\n");
    preParse(Root);

    printf("\nInorder\n");
    inParse(Root);

    printf("\nPostorder\n");
    postParse(Root);
    printf("\n");
    return 0;
}