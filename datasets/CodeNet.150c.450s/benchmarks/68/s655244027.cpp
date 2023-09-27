#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define RITR(x,c) for(__typeof(c.rbegin()) x=c.rbegin();x!=c.rend();x++)
#define setp(n) fixed << setprecision(n)

#define lf double
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>

#define all(a) (a.begin()),(a.end())
#define rall(a) (a.rbegin()),(a.rend())
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ins insert

#define INF 1e10

using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	ll n;
	while(cin>>n, n!=0){
		vll a(n);
		rep(i, n) cin >> a[i];
		sort(all(a));

		ll mini=INF;
		rep(i, n-1){
			mini = min(mini, a[i+1]-a[i]);
		}
		cout << mini << "\n";
	}
	return 0;
}
