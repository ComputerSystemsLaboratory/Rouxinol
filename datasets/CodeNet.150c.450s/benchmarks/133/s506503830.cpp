#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
ll c[30],s[400][30];
ll las[30];

int main()
{
	int D;
	cin >> D;
	rep(i,26)
	{
		cin >> c[i];
	}
	rep(i,D)
	{
		rep(j,26)
		{
			cin >> s[i][j];
		}
	}
	ll tmp = 0;
	//cout << "a" << endl;
	rep(i,D)
	{
		ll v;
		cin >> v;
		v--;
		tmp += s[i][v];
		las[v] = i+1;
		rep(j,26)
		{
			tmp -= c[j] * (i+1 - las[j]);
		}
		cout << tmp << endl;
	}
	return 0;
}