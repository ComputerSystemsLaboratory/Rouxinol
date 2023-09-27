#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node {int p, l, r;};
struct Node T[MAX];
int n;

//先行順巡回
void preParase(int u){
    if (u == NIL) return;
    printf(" %d", u);
    preParase(T[u].l);
    preParase(T[u].r);
}

//中間順巡回
void inParase(int u){
    if (u == NIL) return;
    inParase(T[u].l);
    printf(" %d", u);
    inParase(T[u].r);
}

//後行順巡回
void postParase(int u){
    if (u == NIL) return;
    postParase(T[u].l);
    postParase(T[u].r);
    printf(" %d", u);
}

int main(){
    int i, v, l, r, root;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        T[i].p = NIL;
    }

    for(i=0; i<n; i++){
        scanf("%d %d %d", &v, &l, &r);
        T[v].l = l;
        T[v].r = r;
        if(l != NIL) T[l].p = v;
        if(r != NIL) T[r].p = v;
    }

    for(i=0; i<n; i++) if(T[i].p == NIL) root = i;

    printf("Preorder\n");
    preParase(root);
    printf("\n");
    printf("Inorder\n");
    inParase(root);
    printf("\n");
    printf("Postorder\n");
    postParase(root);
    printf("\n");

    return 0;
}
