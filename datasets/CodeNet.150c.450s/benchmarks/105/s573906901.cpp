#include <bits/stdc++.h>
using namespace std;
const int maxn = 200 + 10;
const int maxb = 62;
typedef long long ll;
ll a[maxn];
char s[maxn];
ll b[maxn];
void init()
{
	memset(b, 0, sizeof b);
}
ll insert(ll x)
{
	for(int i = maxb - 1; ~i; --i)
		if((x >> i) & 1)
		{
			if(!b[i])
			{
				b[i] = x;
				break;
			}
			else
				x ^= b[i];
		}
	return x;
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 1; i <= n; ++i) scanf("%lld", &a[i]);
		scanf("%s", s + 1);
		init();
		int flag = 0;
		for(int i = n; i; --i)
			if(s[i] == '0')
				insert(a[i]);
			else if(insert(a[i]))
			{
				flag = 1;
				break;
			}
		cout << flag << endl;
	}
	return 0;
}