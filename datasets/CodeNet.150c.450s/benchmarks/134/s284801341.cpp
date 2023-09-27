#include<bits/stdc++.h>
#define MAX 10000
#define NIL -1

struct Node { int p, l, r; };
struct Node T[MAX];
int n;

//先行順巡回
void preParse(int u){
    if( u == NIL ) return;
    printf(" %d", u);
    preParse(T[u].l);
    preParse(T[u].r);
}

//中間順巡回
void inParse(int u){
    if( u == NIL ) return;
    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}

//後行順巡回
void postParse(int u){
    if( u == NIL ) return;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}

using namespace std;
int main(){
    int v, l, r, root;

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        T[i].p = NIL;
    }

    for(int i = 0; i < n; ++i){
        scanf("%d %d %d", &v, &l, &r);
        T[v].l = l;
        T[v].r = r;
        if( l != NIL ) T[l].p = v;
        if( r != NIL ) T[r].p = v;
    }

    for(int i = 0; i < n; ++i) if(T[i].p == NIL) root = i;

    printf("Preorder\n");
    preParse(root);
    putchar('\n');
    printf("Inorder\n");
    inParse(root);
    putchar('\n');
    printf("Postorder\n");
    postParse(root);
    putchar('\n');

    return 0;
}