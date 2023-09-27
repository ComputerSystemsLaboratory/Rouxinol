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

using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	ll m, nmin, nmax;
	while(cin>>m>>nmin>>nmax, m!=0){
		vll p(m);
		ll gap=-1, ans=-1;
		rep(i, m) cin >> p[i];
		sort(rall(p));
		for(int i=nmin; i<=nmax; i++){
			int diff = p[i-1]-p[i];
			if (gap <= diff){
				gap = diff;
				ans = i;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
