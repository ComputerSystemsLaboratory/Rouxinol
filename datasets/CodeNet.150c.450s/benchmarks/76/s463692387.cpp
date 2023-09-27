#include<iostream>
#define  int long long
using namespace std;
struct Node
{
    int x;
    Node *l,*r,*p;
}*root,*NIL;


void Insert(int v)
{
    Node *x=root,*y=NIL,*z=new Node();
    z->l=z->r=NIL;
    z->x=v;
    while(x!=NIL)
    {
        y=x;
        if(z->x<x->x)
            x=x->l;
        else x=x->r;
    }
    z->p=y;
    if(y==NIL)root=z;
    else if(z->x<y->x)y->l=z;
    else y->r=z;
}

bool Find(int v)
{
    Node *x=root,*y=NIL;
    while(x!=NIL)
    {
        y=x;
        if(x->x==v)
        return true;
        else if(x->x<v)x=x->r;
        else x=x->l;
    }
    return false;
}

void Inorder(Node *x)
{
    if(x==NIL)return ;
    Inorder(x->l);
    cout<<' '<<x->x;
    Inorder(x->r);
}

void Pre(Node *x)
{
    if(x==NIL)return ;
    cout<<' '<<x->x;
    Pre(x->l);
    Pre(x->r);
}
void Post(Node *x)
{
    if(x==NIL)return ;
    Post(x->l);
    Post(x->r);
    cout<<' '<<x->x;
}
void Print()
{
    Inorder(root);cout<<endl;
    Pre(root);cout<<endl;
}
signed main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="find")
        {   cin>>x;
            if(Find(x))cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else if(s=="insert")cin>>x,Insert(x);
        else Print();
    }
    return 0;
}

