// AOJ ITP 1_7_A
#include<cstdio>

int main()
{
	int m, f, r;
	while( scanf( "%d%d%d", &m, &f, &r ), !(m == -1 && f == -1 && r == -1) )
	{
		int s = m+f;
		if( m*f < 0 )
			puts("F");
		else if( s >= 80 )
			puts("A");
		else if( s >= 65 )
			puts("B");
		else if( s >= 50 )
			puts("C");
		else if( s >= 30 )
			puts( r >= 50 ? "C" : "D" );
		else
			puts("F");
	}

	return 0;
}