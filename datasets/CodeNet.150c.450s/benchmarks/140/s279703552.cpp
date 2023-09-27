#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
typedef long long ll;
//約数列挙
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    //sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
vector<int> dx={1,0,-1,0};vector<int> dy={0,-1,0,1};

struct UnionFind{
    vector<int>par;
    UnionFind(int n) : par(n) {
        REP(i,n)par[i]=i;
    }
    int root(int x){
        if(par[x]==x)return x;
        return par[x]=root(par[x]);
    }
    void unite(int x,int y){
        int rx=root(x);int ry=root(y);
        if(rx==ry)return;
        par[rx]=ry;
    }
    bool same(int x,int y){
        int rx=root(x);int ry=root(y);
        return rx==ry;
    }
};
signed main () {
    int v,e;scanf("%d %d",&v,&e);
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> que;
    REP(i,e){
        int a,b,c;scanf("%d %d %d",&a,&b,&c);
        que.push(make_tuple(c,b,a));
    }
    int ans=0;
    UnionFind tree(v);
    while(!que.empty()){
        tuple<int,int,int> tmp;tmp=que.top();que.pop();
        int cost=get<0>(tmp);int a=get<1>(tmp);int b=get<2>(tmp);
        if(!tree.same(a,b)){
            ans+=cost;
            tree.unite(a,b);
        }
    }
    printf("%d\n",ans);
}
