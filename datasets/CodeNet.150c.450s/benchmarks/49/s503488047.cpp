#include<algorithm>
#include<iostream>
#define rep(i,a) for(int i=0;i<(a);++i)

int n;

int main()
{
	while( std::cin >> n, n )
	{
		int ma = 0, mi = 1001, S = 0;
	
		rep( i, n )
		{
			int a;
			std::cin >> a;
			ma = std::max( ma, a );
			mi = std::min( mi, a );
			S += a;		
		}
		
		std::cout << (S-ma-mi)/(n-2) << std::endl;
	}

	return 0;
}