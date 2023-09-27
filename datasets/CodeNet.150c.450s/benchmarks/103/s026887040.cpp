#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int dp[9][101];

void init();
void make_dp(int sum, int prevused, bool* used, int depth);

void init()
{
	bool used[10] = {false};
	make_dp(0, -1, used, 0);
}

void make_dp(int sum, int prevused, bool* used, int depth)
{
	if( depth == 10 )return;
	
	for(int i = prevused + 1; i < 10; i++)
	{
		if( !used[i] )
		{
			sum += i;
			used[i] = true;
			dp[depth][sum]++;
			make_dp(sum, i, used, depth + 1);
			used[i] = false;
			sum -= i;
		}
	}
}

int main()
{
	int n, s;
	init();

	while(true)
	{
		scanf("%d%d", &n, &s);
		if( n == 0 && s == 0 )break;
		printf("%d\n", dp[n - 1][s]);
	}
	return (0);
}