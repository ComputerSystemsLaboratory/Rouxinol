#include <cstdio>
#define NIL -1

struct Node { int parent, left, right; };

Node T[30];
int n;

void priParse(int i) {
    if (i == NIL) return;
    printf(" %d", i);
    priParse(T[i].left);
    priParse(T[i].right);
}

void inParse(int i) {
    if (i == NIL) return;
    inParse(T[i].left);
    printf(" %d", i);
    inParse(T[i].right);
}

void postParse(int i) {
    if (i == NIL) return;
    postParse(T[i].left);
    postParse(T[i].right);
    printf(" %d", i);
}

int main(void) {
    int i, v, l, r, rt;
    scanf("%d", &n);

    for (i = 0; i < n; i++) T[i].parent = NIL;

    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &v, &l, &r);
        T[v].left = l;
        T[v].right = r;
        if (l != NIL) T[l].parent = v;
        if (r != NIL) T[r].parent = v;
    }

    for (i = 0; i < n; i++) {
        if (T[i].parent == NIL) rt = i;
    }

    printf("Preorder\n");
    priParse(rt);
    printf("\nInorder\n");
    inParse(rt);
    printf("\nPostorder\n");
    postParse(rt);
    printf("\n");

    return 0;
}