#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
struct Node
{
    int key;
    Node *p,*l,*r;
};
Node *root,*NIL;
void insert(int k)
{
    Node *y=NIL;
    Node *x=root;
    Node *z;
    z=(Node*)malloc(sizeof(Node));
    z->key=k;
    z->l=NIL;
    z->r=NIL;
    while(x!=NIL)
    {
        y=x;
        if(z->key<x->key)
            x=x->l;
        else
            x=x->r;
    }
    z->p=y;
    if(y==NIL)
    {
        root=z;
    }
    else
    {
        if(z->key<y->key)
        {
            y->l=z;
        }
        else
        {
            y->r=z;
        }
    }
}
void zx(Node *u)
{
    if(u==NIL)return;
    zx(u->l);
    printf(" %d",u->key);
    zx(u->r);
}
void qx(Node *u)
{
    if(u==NIL)return;
    printf(" %d",u->key);
    qx(u->l);
    qx(u->r);

}
int main()
{
    int n,k;
    scanf("%d",&n);
    string c;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        if(c=="insert")
        {
            scanf("%d",&k);
            insert(k);
        }
        else if(c=="print")
        {
            zx(root);
            printf("\n");
            qx(root);
            printf("\n");
        }
    }
    return 0;
}