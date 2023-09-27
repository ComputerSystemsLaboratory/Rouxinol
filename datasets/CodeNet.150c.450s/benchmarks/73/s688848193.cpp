#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=INT_MAX;
struct segtree
{
    vector<int> node;
    vector<int> lazy;
    vector<bool> lflg;
    int n;
    segtree(int sz)
    {
        n=1;while(n<sz) n*=2;
        node.resize(2*n,0);
        lazy.resize(2*n,0);
        lflg.resize(2*n,false);
    }
    void lazyupdate(int k, int l, int r)
    {
        if(lflg[k])
        {
            node[k]+=(r-l+1)*lazy[k];
            push(lazy[k],k,l,r);
            lazy[k]=0;
            lflg[k]=false;
        }
    }
    void push(int v,int k,int l,int r)
    {
        if(r-l>0)
        {
            lazy[2*k]=lazy[2*k+1]=v;
            lflg[2*k]=lflg[2*k+1]=true;
        }
    }
    void update(int qa, int qb, int v, int k=1, int l=1,int r=-1)
    {
        if(r<0) r=n;
        lazyupdate(k, l, r);
        if(qb<l||r<qa) return;
        if(qa<=l&&r<=qb)
        {
            node[k]+=(r-l+1)*v;
            push(v,k,l,r);
        }
        else
        {
            int m=(l+r)/2;
            update(qa,qb,v,2*k,l,m);
            update(qa,qb,v,2*k+1,m+1,r);
            node[k]=node[2*k]+node[2*k+1];
        }
    }
    int get(int qa, int qb, int k=1, int l=1, int r=-1)
    {
        if(r<0) r=n;
        lazyupdate(k ,l, r);
        if(qb<l||r<qa) return 0;
        if(qa<=l&&r<=qb) return node[k];
        else
        {
            int m=(l+r)/2;
            int lv=get(qa, qb, 2*k, l, m);
            int rv=get(qa, qb, 2*k+1, m+1, r);
            return lv+rv;
        }
    }
};

int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    segtree tree(n);
    for(int i=0;i<q;i++){
        int c;
        scanf("%d",&c);
        if(c){
            int s,t;
            scanf("%d %d",&s,&t);
            cout<<tree.get(s,t)<<endl;
        }else{
            int x,y;
            scanf("%d %d",&x,&y);
            tree.update(x,x,y);
        }
    }
}
