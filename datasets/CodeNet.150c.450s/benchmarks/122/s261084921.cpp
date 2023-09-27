#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define repp(i, m, n) for(int i = m; i < n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef long long ll;
typedef pair<int, int> pai;
typedef pair<ll,ll> pal;
 
int main()
{
	priority_queue<ll> Q;
	string s;
	ll a;
	while(cin >> s && s!="end")
	{
		if(s=="insert")
		{
			cin >> a;
			Q.push(a);
		}
		else
		{
			cout << Q.top() <<endl;
			Q.pop();
		}
	}
	return 0;
}