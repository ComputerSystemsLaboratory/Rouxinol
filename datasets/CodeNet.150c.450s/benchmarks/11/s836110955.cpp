// AOJ ITP 1_6_B
#include<cstdio>
#include<string>
#define rep(i,a) for( int i = 0; i != (a); ++i )

const std::string suit = "SHCD";
bool used[52];

int main()
{
	int n;
	scanf( "%d", &n );
	rep( i, n )
	{
		char ch[2];
		int r;
		scanf( "%s%d", ch, &r );
		used[suit.find( *ch )*13+r-1] = true;
	}

	rep( i, 52 )
		if( !used[i] )
			printf( "%c %d\n", suit[i/13], i%13+1 );

	return 0;
}