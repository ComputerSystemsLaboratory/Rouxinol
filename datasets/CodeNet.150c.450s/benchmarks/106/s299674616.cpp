// AOJ ITP 1_3_D
#include<cstdio>

int main()
{
	int a, b, c;
	scanf( "%d%d%d", &a, &b, &c );

	int ans = 0;
	for( int i = a; i <= b; ++i )
		if( c % i == 0 )
			++ans;

	printf( "%d\n", ans );

	return 0;
}