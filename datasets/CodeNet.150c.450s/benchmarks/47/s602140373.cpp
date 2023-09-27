// AOJ ITP1_2_D
#include<cstdio>

int W, H;
int x, y, r;

int main()
{
	scanf( "%d%d%d%d%d", &W, &H, &x, &y, &r );

	puts( x >= r && x <= W-r && y >= r && y <= H-r ? "Yes" : "No" );

	return 0;
}