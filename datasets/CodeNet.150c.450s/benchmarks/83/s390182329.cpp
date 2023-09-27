/*
	f(i, w):- max f(i-1, w - b[i].w) + b[i].c, f(i-1, w)
*/
#include <bits/stdc++.h>

using namespace std;


const int INF = int(1e9);
struct info{
	int v;
	int w;
}e[100];

int N, W, b[101][10001];


int f( int i, int W ){

	if( W < 0 )
		return -INF;

	if( W == 0 )
		return 0;
	if(i == 0 )
		return 0;

	if(b[i][W] != 0)
		return b[i][W];

	b[i][W] =  max( f( i - 1, W - e[i].w ) + e[i].v, f( i - 1, W ) );
	return b[i][W];
}


int main( void ){

	//freopen("input.in", "r", stdin);
	scanf("%d%d", &N, &W);

	for( int i = 1; i <= N; ++i )
		scanf("%d%d", &e[i].v, &e[i].w);

	printf("%d\n", f(N, W));		

	return 0;
}