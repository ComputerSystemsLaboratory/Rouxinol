#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <malloc.h>
using namespace std;
int n;
struct node
{
    int val;
    node *left,*right;
};
node * root;
void init()
{
    root=NULL;
}
void Insert (int temp)
{
    node *x=root,*y=NULL;
    node *now=(node *)malloc(sizeof(node));
    now->left=now->right=NULL;
    now->val=temp;
    while (x)
    {
        y=x;
        x=x->val>temp? x->left:x->right;
    }
    y==NULL? root=now:y->val>temp?y->left=now:y->right=now;
}
bool Find (int x)
{
    node * p=root;
    while (p)
    {
        if(p->val==x)
            return true;
        else if(p->val<x)
            p=p->right;
        else
            p=p->left;
    }
    return false;
}
void pretraverse (node * nd)
{
    if(nd==NULL)
        return ;
    printf(" %d",nd->val);
    pretraverse (nd->left);
    pretraverse (nd->right);
}
void intraverse (node * nd)
{
    if(nd==NULL)
        return ;
    intraverse (nd->left);
    printf(" %d",nd->val);
    intraverse (nd->right);
}
void output ()
{
   intraverse (root);
   printf("\n");
   pretraverse (root);
   printf("\n");

}
int main()
{
    scanf("%d",&n);
    init();
    while (n--)
    {
        char s[10];
        scanf("%s",s);
        if(s[0]=='i')
        {
            int x;
            scanf("%d",&x);
            Insert (x);
        }
        else if(s[0]=='f')
        {
            int x;
            scanf("%d",&x);
            if(Find(x))
                printf("yes\n");
            else
                printf("no\n");
        }
        else
            output();
    }
    return 0;
}

