#include<stdio.h>
#define MAX 25
#define NIL -1

struct Node {
    int p, l, r;
};

Node T[MAX];

void preorder(int n) {
    printf(" %d", n);
    if (T[n].l!=-1) {
        preorder(T[n].l);
    }
    if (T[n].r!=-1) {
        preorder(T[n].r);
    }
}

void inorder(int n) {
    if (T[n].l!=-1) {
        inorder(T[n].l);
    }
    printf(" %d", n);
    if (T[n].r!=-1) {
        inorder(T[n].r);
    }
}

void postorder(int n) {
    if (T[n].l!=-1) {
        postorder(T[n].l);
    }
    if (T[n].r!=-1) {
        postorder(T[n].r);
    }
    printf(" %d", n);
}

int main() {
    int num, i, j, n;
    scanf("%d", &n);

    for (i=0; i<n; i++) T[i].p=T[i].l=T[i].r=-1;

    for (i=0; i<n; i++) {
        scanf("%d", &j);
        scanf("%d", &num);
        T[j].l = num;
        T[T[j].l].p = j;
        scanf("%d", &num);
        T[j].r = num;
        T[T[j].r].p = j;
    }

    while (T[num].p!=-1) num = T[num].p;

    printf("Preorder\n");
    preorder(num);
    printf("\n");
    printf("");
    printf("Inorder\n");
    inorder(num);
    printf("\n");
    printf("");
    printf("Postorder\n");
    postorder(num);
    printf("\n");
    printf("");

    return 0;
}
