#include<iostream>
#include<math.h>

int main()
{
	int d;
	int ans = 0;
	while( std::cin >> d ){
	 	for( int i = 1; i < 600 / d; i++ ){
			ans += (int)pow( i * d, 2 ) * d;
		}
		std::cout << ans << std::endl;
		ans = 0;
	}

 	return 0;
}