// AOJ 2018 (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2018)
#include<cstdio>
#define rep(i,a) for(int i=0;i<(a);++i)

int N, M, P;

int main()
{
	while( scanf( "%d%d%d", &N, &M, &P ), N|M|P )
	{
		int S = 0, cnt = 0;
		rep( i, N )
		{
			int X;
			scanf( "%d", &X );
			S += X*100;

			if( i == M-1 )
				cnt = X;
		}

		S *= (100-P);
		S /= 100;

		printf( "%d\n", cnt?S/cnt:0 );
	}

	return 0;
}