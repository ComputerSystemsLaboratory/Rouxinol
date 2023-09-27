#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
template<class T,class U>void chmin(T &t,U f){if(t>f)t=f;}
template<class T,class U>void chmax(T &t,U f){if(t<f)t=f;}

struct UnionFindTree{
    vector<int>par,sz;
    UnionFindTree(int n){
        par.resize(n);
        sz.resize(n);
        for(int i=0;i<n;i++){
            par[i]=i;
            sz[i]=1;
        }
    }
    int find(int x){
        return x==par[x]?x:par[x]=find(par[x]);
    }
    void unite(int x,int y){
        x=find(x);y=find(y);
        if(x==y)return;
        if(sz[x]<sz[y])swap(x,y);
        sz[x]+=sz[y];
        par[y]=x;
    }
    bool areSame(int x,int y){
        return find(x)==find(y);
    }
    int size(int x){
        return sz[find(x)];
    }
};

signed main(){
	int n,q;cin>>n>>q;
	UnionFindTree uf(n);
	while(q--){
		int t,x,y;cin>>t>>x>>y;
		if(t==0){
			uf.unite(x,y);
		}
		else{
			cout<<uf.areSame(x,y)<<endl;
		}
	}
	return 0;
}