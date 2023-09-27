#include <bits/stdc++.h>
using namespace std;

template<typename T>
void out(T x) { cout << x << endl; exit(0); }
#define watch(x) cout << (#x) << " is " << (x) << endl





using ll = long long;

const ll mod = 1e9+7;
const int maxn = 1e6 + 5;



int n, m;
vector<int> g[maxn];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
    
    cin>>n>>m;
    for (int i=0; i<m; i++) {
	int u,v; cin>>u>>v;
	u--;
	v--;
	g[u].push_back(v);
	g[v].push_back(u);
    }

    vector<int> dist(n, -1);
    vector<int> par(n, -1);
    dist[0]=0;
    
    queue<int> qq;
    qq.push(0);
    while (qq.size()) {
	int at = qq.front();
	qq.pop();
	for (int to: g[at]) {
	    if (dist[to]==-1) {
		dist[to]=1+dist[at];
		par[to]=at;
		qq.push(to);
	    }
	}
    }
    if (*min_element(dist.begin(),dist.end())<0) out("No");

    cout<<"Yes\n";
    for (int i=1; i<n; i++) {
	cout<<par[i]+1<<"\n";
    }
    
    
    return 0;
}
