#include <iostream>

#define max(X,Y) ((X > Y)?X:Y)

int main(void)
{
	while(true)
	{
		int n;
		int m=0,prev=0;
		std::cin >> n;
		if(!n)
			break;

		m = prev = -1000001;
		for(int i=0; i<n; i++)
		{
			int a;
			std::cin >> a;
			prev = max( a, prev + a );
			m = max( m, prev );
		}
		std::cout << m << std::endl;
	}
	return 0;
}