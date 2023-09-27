#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define st first
#define nd second
#define endl '\n'
#define what_is(x) cerr << #x << " is " << x << endl;
#define what_is_v(x) cerr << #x << " is "; for(auto&e: (x)) cerr << e << ' '; cerr << '\n'; //vector, set
#define what_is_a(x, n) cerr << #x << " is "; for(int i=0;i<n;i++) cerr << x[i] << ' '; cerr <<  '\n'; //n first element of array
#define cerr_pair(x) '{' << x.st << ", " << x.nd << '}'
#define pwhat_is(x) cerr << #x << " is " << cerr_pair(x) << endl;
#define pwhat_is_v(x) cerr << #x << " is "; for(auto&e: (x)) cerr << cerr_pair(e) << ' '; cerr << '\n'; //vector, set
#define pwhat_is_a(x, n) cerr << #x << " is "; for(int i=0;i<n;i++) cerr << cerr_pair(x[i]) << ' '; cerr <<  '\n'; //n first element of array
// #define int long long
// #define pow mypow

typedef pair<int,int> pii;
const int N = 1e5+5;
const int INF = 1e9+5;
const int MOD = 1e9+7;

int n, m;
vector<int> g[N];
int p[N];
int32_t main()
{
	IOS
	// freopen("input.txt", "r", stdin);
	cin >> n >> m;
	while(m--) {
		int u, v; cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(auto u:g[v]){
			if (p[u]) continue;
			p[u] = v;
			q.push(u);
		}
	}
	for(int i=2; i<=n; i++) 
		if (p[i] == 0) {
			cout << "No" << endl;
			return 0;
		}

	cout << "Yes" << endl;
	for(int i=2; i<=n; i++) cout << p[i] << endl;
	
	return 0;
}
