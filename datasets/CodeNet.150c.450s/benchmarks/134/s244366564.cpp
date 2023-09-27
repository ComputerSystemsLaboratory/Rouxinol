#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

#define MAX 30
#define NIL -1

struct Node {int parent, left, right; };

Node T[MAX];
int n;

void preorder(int u){
    printf(" %d", u);
    if(T[u].left != NIL) preorder(T[u].left);
    if(T[u].right != NIL) preorder(T[u].right);
}

void inorder(int u){
    if(T[u].left != NIL) inorder(T[u].left);
    printf(" %d", u);
    if(T[u].right != NIL) inorder(T[u].right);
}

void postorder(int u){
    if(T[u].left != NIL) postorder(T[u].left);
    if(T[u].right != NIL) postorder(T[u].right);
    printf(" %d", u);
}

int main(){
    cin >> n;

    rep(i,n) T[i].parent = T[i].left = T[i].right = NIL;
    
    int v, l, r;
    rep(i,n){
        cin >> v >> l >> r;
        T[v].left = l;
        T[v].right = r;
        if(l != NIL) T[l].parent = v;
        if(r != NIL) T[r].parent = v;
    }

    int root;
    rep(i,n) if(T[i].parent == NIL) root = i;

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
