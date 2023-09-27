// AOJ 2197 (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2197)
#include<cstdio>
#define rep(i,a) for(int i=0;i<(a);++i)

int N;

int main()
{
	while( scanf( "%d", &N ), N )
	{
		int s = 1, t = 2, S = 1, ans = 0;

		while( s < t )
		{
			while( S < N )
				S += t++;

			if( t-s >= 2 && S == N )
				++ans;

			S -= --t;
			S -= s++;
		}

		printf( "%d\n", ans );
	}

	return 0;
}