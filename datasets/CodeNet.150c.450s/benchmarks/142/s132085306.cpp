#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <queue>
#include <deque>
#include <map>
#include <stack>
#include <set>
#include <utility>
#include <functional>
using namespace std;
typedef pair<int, int> pii;
typedef pair<string, int> P;
typedef long long ll;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
const int MAXN = 100000;
const int MAXE = 100000;
const int MAXV = 10000;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
struct UnionFind{
    vector<int> par,rank;
    UnionFind(int n):par(n),rank(n){
        for(int i=0;i<n;++i) par[i]=i;
    }
    int root(int x){
        if(par[x]==x) return x;
        return par[x]=root(par[x]);
    }
    void unite(int x,int y){
        int rx=root(x),ry=root(y);
        if(rx==ry) return ;
        if(rank[ry]>rank[rx]) par[rx]=ry;
        else par[ry]=rx;
        if(rank[rx]==rank[ry]) rank[rx]++;
    }
    bool same(int x,int y){
        return root(x)==root(y);
    }
};
vector<ll> fac(1e6),inv(1e6),finv(1e6);
void initcom(){
    fac[0]=fac[1]=1;
    inv[1]=1;
    finv[0]=finv[1]=1;
    for(int i=2;i<1e6;++i){
        fac[i]=fac[i-1]*i%MOD;
        inv[i]=MOD-inv[MOD%i]*(MOD/i)%MOD;
        finv[i]=finv[i-1]*inv[i]%MOD;
    }
}
ll com(int n,int k){
    if(n<0||k<0) return 0;
    if(n<k) return 0;
    return fac[n]*(finv[k]*finv[n-k]%MOD)%MOD;
}
int compress(vector<int> &x,int w){
    vector<int> sx;
    for(int i=0;i<(int)x.size();++i){
        for(int d=-2;d<=2;++d){
            int t=x[i]+d;
            if(t>=0&&t<w) sx.push_back(t);
        }
    }
    sort(sx.begin(),sx.end());
    sx.erase(unique(sx.begin(),sx.end()),sx.end());
    for(int i=0;i<(int)x.size();++i){
        x[i]=lower_bound(x.begin(),x.end(),x[i])-x.begin();
    }
    return (int)sx.size();
}
int main(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    for(int i=k;i<n;++i){
        if(a[i-k]<a[i]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
