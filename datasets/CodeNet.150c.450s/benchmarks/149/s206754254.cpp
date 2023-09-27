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
int sz[10001];
int n, q;
int P[10001];
int s;
int x, y;
int root(int a)
{
	if(P[a]==a)
	{
		return a;
	}
	else
	{
		return (P[a]=root(P[a]));
	}
}
bool is_the_same_set(int a, int b)
{
	return (root(a)==root(b));
}
void unite(int a, int b)
{
	if(sz[root(a)]<sz[root(b)])
	{
		swap(a, b);
	}
	sz[root(a)]+=sz[root(b)];
	P[root(b)]=root(a);
}
int main()
{
	cin >> n >> q;
	repp(i, 1, n+1)
	{
		P[i]=i;
		sz[i]=1;
	}
	rep(i, q)
	{
		cin >> s >> x >> y;
		if(s==0)
		{
			unite(x, y);
		}
		else
		{
			if(is_the_same_set(x, y))
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
	}
	return 0;
}