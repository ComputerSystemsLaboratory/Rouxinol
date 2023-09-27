#include <bits/stdc++.h>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<lli> vl;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define deb(x) cout << #x": " << (x) << endl;

const int N = 2e4;
const lli INF = 1e18+10;
const lli MOD = 1e9+7;
const ld EPS = 1e-9;


// ---- コーディングはここから！ ('-')7




int main(){_
	int n,m; cin>>n>>m;
	vvi v(n+1);
	fore(i,0,m){
		int a,b; cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	queue<int>q; q.push(1);
	vi vis(n+1,0); vis[1]=1;
	while(!q.empty()){
		int a = q.front(); q.pop();
		for(auto i:v[a]){
			if(!vis[i]){
				q.push(i);
				vis[i]=a;
			}
		}
	}
	fore(i,1,n+1)if(!vis[i]){
		cout<<"No"<<ENDL;
		return 0;
	}
	cout<<"Yes"<<ENDL;
	fore(i,2,n+1)cout<<vis[i]<<ENDL;


}
