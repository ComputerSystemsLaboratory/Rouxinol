#include<iostream>
using namespace std;
int p[10010];
void init(int n)
{
    for(int i=0;i<=n;i++)
        p[i]=i;
};
int root(int a)
{
    if(p[a]==a)
        return a;
    return (p[a]=root(p[a]));
};
bool is_same_set(int a,int b)
{
    return root(a)==root(b);
};
void unite(int a,int b)
{
    p[root(a)]=root(b);
};
int main()
{
    int n,q;
    cin>>n>>q;
    init(n);
    for(int i=0;i<q;i++)
    {
        int cmd,a,b;
        cin>>cmd>>a>>b;
        if(cmd==0)
        {
            unite(a,b);
        }
        else
        {
            cout<<is_same_set(a,b)<<endl;
        }
    }
}