#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<bitset>
using namespace std;
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; i++ )
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pint;
typedef pair<ll,int> pli;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;
int dx[4]={1,0,-1,0} , dy[4]={0,1,0,-1} ;
struct UnionFind{
    vector<int> par;
    UnionFind(int n):par(n,-1){}
    int find(int x){
        if(par[x]<0)return x;
        return par[x]=find(par[x]);
    }
    bool unite(int x,int y){
        x=find(x);
        y=find(y);
        if(x==y)return false;
            par[x]+=par[y];
            par[y]=x;
        return true;
    }

    bool same(int x,int y){
        return find(x)==find(y);
    }
};
int main(){
    int n,q;
    cin>>n>>q;
    UnionFind uf(n);
    rep(i,q){
        int c,x,y;
        cin>>c>>x>>y;
        if(c)cout<<uf.same(x, y)<<endl;
        else uf.unite(x,y);
    }
   return 0;
}
