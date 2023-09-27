#include <bits/stdc++.h>
using namespace std;
#define FOR(i,o,n) for(long long i = o;i<n;i++)
#define oneforall ios::sync_with_stdio(false);cin.tie(0);
#define all(v) (v).begin(),(v).end()
#define ini(...) int __VA_ARGS__; in(__VA_ARGS__)
#define inl(...) long long __VA_ARGS__; in(__VA_ARGS__)
#define ins(...) string __VA_ARGS__; in(__VA_ARGS__)
#define int long long 
const long long inf=1e18;
void in(){} template <typename T,class... U> void in(T &t,U &...u){ cin >> t; in(u...);}
void out(){cout << "\n";} template <typename T,class... U> void out(const T &t,const U &...u){ cout << t; if(sizeof...(u)) cout << " "; out(u...);}
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
typedef vector<pair<long, long > > vpll;
typedef vector<pair<int, int > > vpii;
#define FORR(x,arr) for(auto& x:arr)
#define ZERO(a) memset(a,0,sizeof(a))





//3111111111111111111111111111111
	
	class unionfind {
	vector<int> par, rank;
 
	public:
	void init(int n) {
		par.resize(n);
		rank.resize(n);
 
		for (int i = 0; i < n; i++) {
			par[i] = i;
			rank[i] = 0;
		}
	}
 
	int find(int x) {
		if (par[x] == x) return x;
		else return par[x] = find(par[x]);
	}
 
	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y) return ;
 
		if (rank[x] < rank[y]) par[x] = y;
		else {
			par[y] = x;
			if (rank[x] == rank[y]) ++rank[x];
		}
	}
	};



	void solve(){


		ini(n);
		ini(n1);
		unionfind uf;
		uf.init(n);
		priority_queue<pair<int,pair<int,int> >> morty;
		FOR(i,0,n1){
			ini(tmp,tmp1,tmpp);
			tmpp*=-1;
			morty.push({tmpp,{tmp,tmp1}});
		}
		int rick = 0;
		while(!morty.empty()){
			auto x = morty.top();
			morty.pop();
			if(uf.find(x.second.first)!=uf.find(x.second.second)){
				uf.unite(x.second.first,x.second.second);
				rick+=x.first;
			}
		}
		out(rick*-1);
		

		


		
		
	}



	



















int32_t main() {
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall
	oneforall 
	oneforall

	solve();
	


	return 0;
}

