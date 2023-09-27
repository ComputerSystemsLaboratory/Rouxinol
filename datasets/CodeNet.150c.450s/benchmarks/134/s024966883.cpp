
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=1e4+5;
const int NIL=-1;

struct node{
    int parent,left,right;
};

node t[maxn];
int n;

void preparse(int u)
{
    if(u==NIL){
        return ;
    }
    printf(" %d",u);
    preparse(t[u].left);
    preparse(t[u].right);
}

void inparse(int u)
{
    if(u==NIL){
        return ;
    }
    inparse(t[u].left);
    printf(" %d",u);
    inparse(t[u].right);
}

void postparse(int u)
{
    if(u==NIL){
        return ;
    }
    postparse(t[u].left);
    postparse(t[u].right);
    printf(" %d",u);
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        t[i].parent=NIL;
    }
    int v,l,r;
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&v,&l,&r);
        t[v].left=l;
        t[v].right=r;
        if(l!=NIL){
            t[l].parent=v;
        }
        if(r!=NIL){
            t[r].parent=v;
        }
    }
    int root;
    for(int i=0;i<n;i++){
        if(t[i].parent==NIL){
            root=i;
            break;
        }
    }
    printf("Preorder\n");
    preparse(root);
    printf("\n");
    printf("Inorder\n");
    inparse(root);
    printf("\n");
    printf("Postorder\n");
    postparse(root);
    printf("\n");
    return 0;
}
/*
9
0 1 4
1 2 3
2 -1 -1
3 -1 -1
4 5 8
5 6 7
6 -1 -1
7 -1 -1
8 -1 -1
*/

