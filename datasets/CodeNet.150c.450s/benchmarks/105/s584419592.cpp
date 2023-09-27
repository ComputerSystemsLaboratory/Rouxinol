#include<bits/stdc++.h>
using namespace std;

long long a[202];
long long v[202];
char s[202];

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 1; i <= n; i++)
		{
			scanf("%lld", &a[i]); 
		}
		scanf("%s", s + 1);
		
		memset(v, 0, sizeof(v));
		
		int ans = 0;
		for(int i = n; i >= 1; i--)
		{
			if(s[i] == '0')
			{
				for(int j = 61; j >= 0; j--)
					if(a[i] & (1ll << j))
					{
						if(v[j] == 0)
						{
							v[j] = a[i];
							break;
						}
						else
							a[i] ^= v[j];
					}
			}
			else
			{
				for(int j = 61; j >= 0; j--)
					if(a[i] & (1ll << j))
					{
						if(v[j] == 0)
						{
							ans = 1;
							break;
						}
						else
							a[i] ^= v[j];
					}
				if(ans == 1)
					break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}