
#include <bits/stdc++.h>
using namespace std;
#define REP(i,x) for(int i = 0;i < x;++i)
#define FOR(i,x,y) for(int i = x;i < y;++i)
#define ALL(a) a.begin(),a.end()
using ll = long long;

int n,q;
int par[12345];
int rnk[12345];
int siz;
void init(int n_)
{
    siz = n_;
    REP(i,siz)
    {
        par[i] = i;
        rnk[i] = 0;
    }
}
int parent(int x)
{
    if(x == par[x])return x;
    return par[x] = parent(par[x]);
}
void unite(int x,int y)
{
    x = parent(x);
    y = parent(y);
    if(x == y)return;
    if(rnk[x] < rnk[y])
    {
        par[x] = y;
    }
    else
    {
        par[y] = x;
        if(rnk[x] == rnk[y])
        {
            rnk[x]++;
        }
    }
}
bool find(int x,int y)
{
    return parent(x) == parent(y);
}

int main()
{
    cin >> n >> q;
    init(n);
    REP(i,q)
    {
        int com,x,y;
        cin >> com >> x >> y;
        if(com == 0)
        {
            unite(x,y);
        }
        else
        {
            cout << (find(x,y) ? 1 : 0) << endl;
        }
    }
    return 0;
}