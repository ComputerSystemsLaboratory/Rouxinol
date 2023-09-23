#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int main()
{
	int n;
	int containerTop[2];
	bool flag;
	n = in();
	loop(i, 0, n)
	{
		containerTop[0] = containerTop[1] = -1;
		flag = true;
		
		loop(j, 0, 10)
		{
			int ball = in();
			if( containerTop[0] < ball )
			{
				containerTop[0] = ball;
			}
			else if( containerTop[1] < ball )
			{
				containerTop[1] = ball;
			}
			else
			{
				flag = false;
			}
		}
		printf("%s\n", flag ? "YES" : "NO");
	}
	return (0);
}