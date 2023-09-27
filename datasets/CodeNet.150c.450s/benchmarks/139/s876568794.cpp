#include <bits/stdc++.h>

#define rep2(x,fr,to) for(int x=(fr);x<(to);x++)
#define rep(x,to) for(int x=0;x<(to);x++)
#define repr(x,fr,to) for(int x=(fr);x>=(to);x--)
#define all(c) c.begin(),c.end()
#define sz(v) (int)v.size()

using namespace std;
typedef long long  ll; typedef vector<int> VI; typedef pair<int,int> pii; typedef vector<ll> VL; const int MD = 1e9 + 7;
void dbg(){cerr<<"\n";} template <class F,class ...S> void dbg(const F& f, const S&...s){cerr <<f <<": "; dbg(s...);}


int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);
	int n, m;
	cin >>n >>m;
	vector<VI> r(n+1);
	rep(i, m){
		int a, b; cin >>a >>b;
		r[a].push_back(b);
		r[b].push_back(a);
	}
	
	const int INF= 1<<28;
	VI dd(n+1, INF), bf(n+1, -1);
	queue< int > que;
	que.emplace(1); dd[1]=0;
	while(!que.empty()){
		int cy = que.front();
		que.pop();
		for(auto v: r[cy]){
			if(dd[v] == INF){
				que.emplace(v);
				dd[v] = dd[cy] + 1;
				bf[v] = cy;
			}
		}
	}
	cout <<"Yes\n";
	rep2(i,2, n+1) cout <<bf[i] <<"\n";
	
	return 0;
}
