#include<iostream>
using namespace std;
#define NIL -1
struct zs{int id;int l;int r;}a[30];
int n;
void Pre(int p)
{
    if(p==NIL)return;
    else
    {
        cout<<" "<<p;
        Pre(a[p].l);
        Pre(a[p].r);
    }
}
void Ino(int p)
{
    if(p==NIL)return;
    else
    {   Ino(a[p].l);
        cout<<" "<<p;
        Ino(a[p].r);
    }
}
void Pos(int p)
{
    if(p==NIL)return;
    else
    {
        Pos(a[p].l);
        Pos(a[p].r);
        cout<<" "<<p;
    }
}
int main()
{
    int i,v,l,r,root;
    cin>>n;
    for(i=0;i<n;i++)
    {
        a[i].id=NIL;
    }
    for(i=0;i<n;i++)
    {
        cin>>v>>l>>r;
        a[v].l=l;
        a[v].r=r;
        if(l!=NIL)a[l].id=v;
        if(r!=NIL)a[r].id=v;
    }
    for(i=0;i<n;i++)if(a[i].id==NIL)root=i;
    cout<<"Preorder"<<endl;
    Pre(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    Ino(root);
    cout<<endl;
    cout<<"Postorder"<<endl;
    Pos(root);
    cout<<endl;
    return 0;
}