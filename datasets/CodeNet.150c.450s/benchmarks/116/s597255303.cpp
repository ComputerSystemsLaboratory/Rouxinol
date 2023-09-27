#include<iostream>
#include<string.h>

int array[100001];
int n, k;

void add( int i, int x )
{
 	while( i <= n ){
		array[i] += x;
		i += i & (-i);
	}	
	
	return;
}

int sum( int i )
{
	int s = 0;
 	
	while( i > 0 ){
	 	s += array[i];
		i -= i & (-i);
	}
	
	return s;
}

int main()
{
	while( std::cin >> n >> k, n, k ){
		memset( array, 0, sizeof( array ) );
		
		for( int i = 1; i <= n; i++ ){
			int x;
			std::cin >> x;
			add( i, x );
		}
		
		int ans = -10001;
		for( int i = 1; i + k <= n; i++ ){
			ans = std::max( ans, sum( i + k ) - sum( i ) );
		}
		
		std::cout << ans << std::endl;
	}

 	return 0;	
}