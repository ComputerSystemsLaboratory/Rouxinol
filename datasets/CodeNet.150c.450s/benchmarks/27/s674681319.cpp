#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<string>

using namespace std;
struct Node
{
    int x;
    Node *l,*r,*p;
}*root,*NIL;
void Insert(Node *T,int v)
{
    Node *y=NIL;        //用来指向新加入节点的父亲节点
    Node *z=new Node();     //创建
    Node *x=T;              //搜索的指针，如果不能回到过去，那么就不要回去了，重新开始也挺好的。y指针就是一个不错的尝试。
    z->x=v;
    z->l=z->r=NIL;
    while(x!=NIL)
    {
        y=x;
        if(z->x<x->x)
            x=x->l;
        else
            x=x->r;
    }
    z->p=y;
    if(y==NIL)root=z;
    else if(z->x<y->x)y->l=z;
    else if(z->x>y->x)y->r=z;
}

void Inorder(Node *i)
{
    if(i==NIL)return ;
    Inorder(i->l);
    cout<<' '<<i->x;
    Inorder(i->r);
}

void Preorder(Node *i)
{
    if(i==NIL)return ;
    cout<<' '<<i->x;
    Preorder(i->l);
    Preorder(i->r);
}

void Print()
{
    Inorder(root);cout<<endl;
    Preorder(root);cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="insert")
        {
            int v;
            cin>>v;
            Insert(root,v);
        }
        else Print();
    }
    return 0;
}

