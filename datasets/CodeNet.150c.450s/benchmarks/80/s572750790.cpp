#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int main()
{
	int apoint = 0;
	int bpoint = 0;
	for(int i = 0; i < 4; i++)
	{
		apoint += in();
	}
	for(int i = 0; i < 4; i++)
	{
		bpoint += in();
	}
	printf("%d\n", max(apoint, bpoint));
	return (0);
}