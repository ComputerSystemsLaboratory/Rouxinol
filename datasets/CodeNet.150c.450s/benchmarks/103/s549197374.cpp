#include<iostream>
#include<string.h>

int n, s;
int used[10];
int ans = 0;

void func( int num, int sum )
{
	if( num == n ){
		if( sum == s ){
			ans++;
		}
		return;
	}
	
	for( int i = used[num]; i <= 9; i++ ){
		used[num+1] = i + 1;
		func( num + 1, sum + i );
		used[num+1] = 0;
	}
}

int main()
{
	while( 1 ){
		memset( used, 0, 10 );
		ans = 0;
		
	 	std::cin >> n >> s;
		if( !n && !s ) break;
		
		func( 0, 0 );
		
		std::cout << ans << std::endl;
	}

 	return 0;
}