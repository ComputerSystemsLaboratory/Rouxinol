// AOJ ITP 1_5_D
#include<cstdio>

void call( int n )
{
	int i = 1;
	do
	{
		int x = i;
		
		if( x % 3 == 0 )
			printf( " %d", i );
		else
		{
			do
			{
				if( x % 10 == 3 )
				{
					printf( " %d", i );
					break;
				}
				x /= 10;
			} while( x );
		}
	}while( ++i <= n );

	puts("");

	return;
}

int main()
{
	int n;
	scanf( "%d", &n );
	call( n );
	
	return 0;
}