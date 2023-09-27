// AOJ ITP 1_3_C
#include<cstdio>
#include<algorithm>

int main()
{
	int x, y;
	while( scanf( "%d%d", &x, &y ), x|y )
		printf( "%d %d\n", std::min(x,y), std::max(x,y) );

	return 0;
}