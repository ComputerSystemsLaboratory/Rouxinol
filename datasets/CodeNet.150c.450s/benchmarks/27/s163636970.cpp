#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<queue>
using namespace std;

static const int inf=1e9;
struct Node
{
    int data;
    Node *l,*r;
};
int m;
int total;

void add_point(Node *&p,int x)
{
    if(p==NULL)
    {
        p=(Node *)malloc(sizeof(Node));
        p->data=x;
        p->l=NULL;
        p->r=NULL;
        return;
    }
    if(x<p->data)
        add_point(p->l,x);
    else
        add_point(p->r,x);
}

void inorder(Node *p)
{
    if(p!=NULL)
    {
        inorder(p->l);
        printf(" %d",p->data);
        inorder(p->r);
    }
}

void preorder(Node *p)
{
    if(p!=NULL)
    {
        printf(" %d",p->data);
        preorder(p->l);
        preorder(p->r);
    }
}

int main()
{
    int i,x;
    char st[20];
    Node *tree=NULL;

    cin>>m;
    for(i=1;i<=m;i++)
    {
        scanf("%s",st);
        if(st[0]=='i')
        {
            scanf("%d\n",&x);
            add_point(tree,x);
        }else
        {
            inorder(tree);
            cout<<endl;
            preorder(tree);
            cout<<endl;
        }
    }
    return 0;
}

