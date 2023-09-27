#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define ALL(c) c.begin(),c.end()
#define PRINTALL(c) for(auto& x:c){cout<<x<<' ';}cout<<endl;
#define PAIRCOMP(c,comp) [](const pair<ll,ll>& lhs,const pair<ll,ll>& rhs){return lhs.c comp rhs.c;}

using namespace std;
using ll = long long;

constexpr ll atcoder_mod = 1e9+7;

template<typename T=int>
T in(){T x; cin >> x; return (x);}
template<typename T=int,typename C=vector<T>>
C vecin(int N){C x(N);REP(i,N){x[i]=in<T>();}return move(x);}

void vout(){cout << endl;}
template<typename Head,typename... Tail>
void vout(Head&& h,Tail&&... t){cout << ' ' << h;vout(forward<Tail>(t)...);}
void out(){cout << endl;}
template<typename Head,typename... Tail>
void out(Head&& h,Tail&&... t){cout << h;vout(forward<Tail>(t)...);}

class UnionFind{
public:
	vector<ll> par;
	vector<ll> num;

	UnionFind(ll N):par(N),num(N){
		for(ll i=0;i<N;i++){
			par[i]=i;
			num[i]=1;
		}
	}

	ll root(ll x){
		if(par[x]==x){
			return x;
		}
		return par[x]=root(par[x]);
	}

	void unite(ll x,ll y){
		ll rx = root(x);
		ll ry = root(y);
		if (rx == ry) return;
		par[rx] = ry;
		num[ry] += num[rx];
	}

	bool same(ll x,ll y){
		ll rx = root(x);
		ll ry = root(y);
		return rx == ry;
	}

	ll getsize(ll x){
		return num[root(x)];
	}
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N=in(),M=in();
	UnionFind uf(N);
	REP(i,M){
		int u=in(),v=in();
		uf.unite(u,v);
	}
	int Q=in();
	REP(i,Q){
		int u=in(),v=in();
		out(uf.same(u,v)?"yes":"no");
	}

	return 0;
}

