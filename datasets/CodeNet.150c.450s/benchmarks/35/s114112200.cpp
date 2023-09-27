#include<iostream>
#include<string.h>

int n;
int a[5001];

void add( int i, int x )
{	
	while( i <= n ){
		a[i] += x;
		i += i & (-i);
	}
	
	return;
}

int sum( int i )
{
	if( i == 0 ) return 0;

	int s = 0;
	while( i > 0 ){
		s += a[i];
		i -= i & (-i);
	}
	
	return s;
}

int main()
{
	while( 1 ){
		memset( a, 0, sizeof( a ) );
	
		std::cin >> n;
		if( !n ) break;
		
		for( int i = 1; i <= n; i++ ){
		 	int x;
			std::cin >> x;
			add( i, x );
		}
		
		int ans = -100001;
		
		for( int i = 0; i < n; i++ ){
		 	for( int j = i + 1; j <= n; j++ ){
				ans = std::max( ans, sum( j ) - sum( i ) );
			}
		}
		
		std::cout << ans << std::endl;
	}
	
 	return 0;
}