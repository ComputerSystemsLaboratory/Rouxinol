// M
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 303;
int q, n;
ll A[N];
char S[N];
int main()
{
	scanf("%d", &q);
	for (; q; q --)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i ++)
			scanf("%lld", &A[i]);
		memset(S, 0, sizeof(S));
		scanf("%s", &S);
		bool Sec = 0;
		vector < ll > B;
		for (int i = n - 1; ~ i; i --)
			if (A[i])
			{
				if (S[i] == '0')
				{
					ll a = A[i];
					for (ll b : B)
						a = min(a, a ^ b);
					for (ll &b : B)
						b = min(b, b ^ a);
					if (a) B.push_back(a);
				}
				else
				{
					ll a = A[i];
					for (ll b : B)
						a = min(a, a ^ b);
					if (a) {Sec = 1; break;}
				}
			}
		printf("%d\n", (int)Sec);
	}
	return 0;
}
