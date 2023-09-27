#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define IOS ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define fi first
#define se second
#define pf push_front
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define debug(val) cerr << "Value " << #val << " : " << val << '\n';
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1e9 + 7;
const ll inf = 0x3f3f3f3f;
const ld epsilon = 10e-9;
const ll nax = 1e5+5;
ll  n, m;
vector<ll>arr[nax];
bool vis[nax];
vector<ll>dist(nax);
	
int main(void){
	IOS
	cin >> n >> m;
	for(int i=0;i<m;i++){
		ll a, b;
		cin >> a >> b;
		arr[a].eb(b);
		arr[b].eb(a);
	}
	if(arr[1].empty()){
		cout << "No" << '\n';
		return 0;
	}
	cout << "Yes" << '\n';
	queue<ll>q;
	q.push(1);
	while(!q.empty()){
		ll curr=q.front();
		q.pop();
		for(auto x:arr[curr]){
			if(vis[x]) continue;
			vis[x]=1;
			dist[x]=curr;
			q.push(x);
		}
	}
	for(int i=2;i<=n;i++) cout << dist[i] << '\n';
}
