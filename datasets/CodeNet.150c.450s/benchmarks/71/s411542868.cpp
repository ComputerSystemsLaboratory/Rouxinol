#include <iostream>

int main() {
	int n;
	while( std::cin >> n ) {
		int ans = 0;
		for( int a=0; a<10; ++a )
			for( int b=0; b<10; ++b )
				for( int c=0; c<10; ++c )
					for( int d=0; d<10; ++d )
						ans += (a+b+c+d==n)?1:0;
		std::cout << ans  << std::endl;
	}
}