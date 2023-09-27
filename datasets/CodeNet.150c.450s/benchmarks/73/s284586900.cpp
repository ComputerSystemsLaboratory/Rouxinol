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
#define null NULL
using namespace std;

struct Node
{
    int dl,dr,s;
    Node *pl,*pr;
};
int n,q;

void build(Node *&p,int l,int r)
{
    p=(Node *)malloc(sizeof(Node));
    p->dl=l,p->dr=r,p->s=0;
    p->pl=null,p->pr=null;
    int mid=(l+r)/2;
    if(r>l)
    {
        build(p->pl,l,mid);
        build(p->pr,mid+1,r);
    }
}
int query(Node *&p,int l,int r)
{
    if(p->dl==l &&p->dr==r)
        return p->s;
    int mid=(p->dl+p->dr)/2;
    if(r<=mid)
        return query(p->pl,l,r);
    else if(l>mid)
        return query(p->pr,l,r);
    else
        return query(p->pl,l,mid)+query(p->pr,mid+1,r);
}
void update(Node *&p,int x,int data)
{
    p->s+=data;
    if(p->dl==p->dr)//找到最后一个叶子节点
        return;
    int mid=(p->dl+p->dr)/2;
    if(x<=mid)
        update(p->pl,x,data);
    else
        update(p->pr,x,data);
}
int main()
{
    int i,type,tx,ty;
    Node *tree=null;
    scanf("%d%d",&n,&q);
    build(tree,0,n-1);
    for(i=0;i<q;i++)
    {
        scanf("%d%d%d",&type,&tx,&ty);
        tx--;
        if(type==0)
        {
            update(tree,tx,ty);
        }else
        {
            ty--;
            int ans=query(tree,tx,ty);
            printf("%d\n",ans);
        }
    }
    return 0;
}

