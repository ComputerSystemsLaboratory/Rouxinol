#include <bits/stdc++.h>
using namespace std;
#define MAX 30
#define NIL -1


struct node{
    int p, l, r;
};
node T[MAX];
int n;

void Preorder(int u){
    if(u==NIL) return;
    printf(" %d",u);
    Preorder(T[u].l);
    Preorder(T[u].r);
}

void Inorder(int u){
    if(u==NIL) return;
    Inorder(T[u].l);
    printf(" %d",u);
    Inorder(T[u].r);
}

void Postorder(int u){
    if(u==NIL) return;
    Postorder(T[u].l);
    Postorder(T[u].r);
    printf(" %d",u);
}

int main(){

    scanf("%d",&n);
    for(int i=0;i<n;++i){
        T[i].l = T[i].p = T[i].r = NIL;
    }
    int id, lchild, rchild, root;

    for(int i=0;i<n;++i){
        scanf("%d %d %d",&id,&lchild,&rchild);
        T[id].l = lchild;
        T[id].r = rchild;
        T[lchild].p = id;
        T[rchild].p = id;
    }
    for(int i=0;i<n;++i){
        if(T[i].p==NIL) root=i;
    }
    printf("Preorder\n");
    Preorder(root);
    printf("\n");
    printf("Inorder\n");
    Inorder(root);
    printf("\n");
    printf("Postorder\n");
    Postorder(root);
    printf("\n");

    return 0;
}



