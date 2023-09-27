#include<stdio.h>
#define NIL -1
struct node{int p,l,r;};
node T[26];
int n;

void preorder(int u){
    if(u==NIL)return;
    printf(" %d",u);
    preorder(T[u].l);
    preorder(T[u].r);
}

void inparse(int u)
{
    if(u==NIL)return ;
    inparse(T[u].l);
    printf(" %d",u);
    inparse(T[u].r);
}

void postorder(int u)
{
    if(u==NIL)return ;
    postorder(T[u].l);
    postorder(T[u].r);
    printf(" %d",u);
}

int main()
{
    int v,l,r,root=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){T[i].p=NIL;}
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&v,&l,&r);
        T[v].l=l;
        T[v].r=r;
        if(l!=NIL)T[l].p=v;
        if(r!=NIL)T[r].p=v;
    }
    for(int i=0;i<n;i++)
        if(T[i].p==NIL)root=i;
    printf("Preorder\n");
    preorder(root);
    printf("\n");
    printf("Inorder\n");
    inparse(root);
    printf("\n");
    printf("Postorder\n");
    postorder(root);
    printf("\n");
    return 0;
}