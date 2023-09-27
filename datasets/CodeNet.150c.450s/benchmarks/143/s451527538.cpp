#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
 
typedef long long ll;
typedef vector<int> vi;
typedef unsigned long ul;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef set<int> si;
typedef multiset<int> mi;
 
const ll INF = 1e18;
const int MOD = 1e9+7;
 
int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ofstream cout ("fileName.txt");
	//ifstream cin ("fileName.txt");
	
	map<int,ll> m;
	int N, Q;
	ll sum=0;
	cin >> N;
	
	vl A(N);
	
	for(int i=0; i<N; ++i) cin >> A[i], sum+=A[i], ++m[A[i]];
	
	cin >> Q;
	
	for(int i=0; i<Q; ++i) {
		
		ll B, C;
		cin >> B >> C;
		
		sum-=m[B]*B;
		sum+=m[B]*C;
		m[C]+=m[B];
		m[B]=0;
		
		//for(auto x: m) cout<<x.f<<" - "<<x.s<<"\n";
		
		cout<<sum<<"\n";
	}
	
	return 0;
}
