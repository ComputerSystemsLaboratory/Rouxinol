// AOJ 1186
#include<cstdio>
#include<algorithm>
#define repi(i,a,b) for( int i = (a); i != (b); ++i )

int sqr( int x )
{
	return x*x;
}

int main()
{
	int h, w;
	while( scanf( "%d%d", &h, &w ), h|w )
	{
		int d = sqr(h)+sqr(w);
		int ansh = 151, answ = 0;

		repi( i, 1, 151 )
		{
			repi( j, i+1, 151 )
			{
				if( sqr(i)+sqr(j) > d || (sqr(i)+sqr(j) == d && i > h) )
				{
					int ansd = sqr(answ)+sqr(ansh), dij = sqr(i)+sqr(j);

					if( ansd > dij || (ansd==dij && ansh > i) )
						ansh = i, answ = j;
				}
			}
		}
						

		printf( "%d %d\n", ansh, answ );
	}

	return 0;
}