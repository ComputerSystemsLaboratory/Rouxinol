#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
const int mod = 1e9 + 7;
const int maxn = 1e5 + 10;
const int inf = 0x3f3f3f3f;
int prime[maxn];
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	for(int i=2;i<maxn;i++) {
		if(!prime[i]) prime[++prime[0]]=i;
		for(int j=1;j<=prime[0]&&prime[j]<=maxn/i;j++) {
			prime[i*prime[j]]=1;
			if(i%prime[j]==0) break;
		}
	}
	int n;
	cin>>n;
	cout<<n<<":";
	vi ans;
	for(int i=1;i<=prime[0];i++) {
		while(n%prime[i]==0) {
			ans.pb(prime[i]);
			n/=prime[i];
		}
	}
	if(n!=1) ans.pb(n);
	for(int x:ans) cout<<" "<<x;
	cout<<'\n';
	return 0;
}

