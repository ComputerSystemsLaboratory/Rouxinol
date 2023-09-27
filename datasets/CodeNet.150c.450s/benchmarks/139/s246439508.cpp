#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3f
#define all(x) (x).begin(),(x).end()
#define forn(i, a, b) for (int i=a; i<(signed)(b); ++i)
#define pb push_back
 
 
// debug templates 
#define debug(x)       cerr<< #x <<" : "<< x << endl;
#define debuga(A,N)    cerr<< #A <<" : [";for(int i = 0; i<N;i++) cerr<<A[i]<<" "; cerr<<"]\n";
#define debuga2(A,N,M) cerr<< #A << " : \n"; for(int i=0;i<N;i++){cerr<<"[";for(int j=0;j<M;++j) cerr<<A[i][j]<<" ";cerr<<"]\n";}
#define debugp(p)      cerr<< #p <<" : "<<"("<<(p).first<<","<<(p).second<<")\n";
#define debugv(v)      cerr<< #v <<" : "<<"[";for(int i = 0; i< (v).size(); i++) cerr<<v[i]<<" "; cerr<<"]\n";
#define debugv2(v)     cerr<< #v << " : \n"; for(int i=0;i<v.size();i++){cerr<<"[";for(int j=0;j<(v[0].size());++j) cerr<<v[i][j]<<" ";cerr<<"]\n";}
#define debugs(m)      cerr<< #m <<" : [ "; for(auto itr = m.begin(); itr!=m.end();itr++) cerr<<*itr<<" "; cerr<<"]\n";
#define debugm(m)      cerr<< #m <<" : [ "; for(auto itr = m.begin();itr!=m.end(); itr++) cerr<<"("<<itr->first<<","<<itr->second<<") ";cerr<<"]\n";


const int mxN = 1e5 + 7;
vector<int> adj[mxN];

// dijstra's algo
void solve(){
	int n,m; cin >> n >> m;
	int dist[n], prev[n];
	memset(dist,inf,sizeof(dist));
	memset(prev,-1,sizeof(dist));
	forn(i,0,m){
		int a,b; cin >> a >> b;
		--a;--b; // 0-index
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dist[0] = 0;
	queue<int> q;
	q.push(0);
	while(q.size()){
		int cur = q.front();
		q.pop();
		int cost = dist[cur] + 1;
		for(auto x : adj[cur]){
			if(dist[x] > cost){
				dist[x] = cost;
				prev[x] = cur;
				q.push(x);
			}
		}
	}
	bool imp = 0;
	forn(i,1,n) if(dist[i] == inf) imp = 1;
	if(imp) cout << "No";
	else{
		cout << "Yes\n";
		forn(i,1,n){
			cout << prev[i]+1 << '\n';
		}
	}
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	solve();
	return 0;
}
 
