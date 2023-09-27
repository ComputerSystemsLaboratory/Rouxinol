#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int MAXN = 209;
ll a[MAXN]; char s[MAXN];
int main()
{
	int T; scanf("%d", &T);
	while (T--)
	{
		int n; scanf("%d", &n);
		for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
		scanf("%s", s + 1);
		vector<ll> v;
		bool flag = 1;
		for (int i = n ; i >= 1; i--)
		{
			ll b = a[i];
			for (int k = 0; k < v.size(); k++) b = min(b, b ^ v[k]);
			if (b) {
				if (b) {
					if (s[i] == '1') {flag = 0; break;}
					v.push_back(b);
				}
			}

		}
		if (flag) puts("0");
		else puts("1");
	}
	return 0;
}