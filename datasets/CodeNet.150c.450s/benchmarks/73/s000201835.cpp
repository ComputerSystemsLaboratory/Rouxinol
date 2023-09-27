// more : http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B&lang=jp

#include <bits/stdc++.h>
using namespace std;

struct SegTree
{
    int N;
    vector<int> dat,lazy;

    SegTree(int n)
    {
        N = 1;
        while (N < n) N<<=1;
        dat.assign(2*N-1, 0);
        lazy.assign(2*N-1, 0);
    }

    void add(int a,int b,int x) { add(a,b,x,0,0,N); }

    int add(int a,int b,int x,int k,int l,int r)
    {
        if ( r <= a || b <= l ) return dat[k];
        if ( a <= l && r <= b )
        {
            lazy[k] += x;
            return dat[k] += x;
        }

        return dat[k] = add(a,b,x,k*2+1,l,(l+r)/2) + add(a,b,x,k*2+2,(l+r)/2,r) + lazy[k] * (r-l);
    }

    int sum(int a,int b){ return sum(a,b,0,0,N); }

    int sum(int a,int b,int k,int l,int r)
    {
        if ( r <= a || b <= l ) return 0;
        if ( a <= l && r <= b ) return dat[k];

        return sum(a,b,k*2+1,l,(l+r)/2) + sum(a,b,k*2+2,(l+r)/2,r) + lazy[k] * (r-l);
    }
};


int main()
{
    int N,Q;
    cin >> N >> Q;

    SegTree seg(N);

    for(int i=0; i<Q; i++)
    {
        int c,x,y;
        cin >> c >> x >> y;

        if(c)
        {
            cout << seg.sum(x-1,y) << endl;
        }
        else
        {
            seg.add(x-1,x,y);
        }
    }
}