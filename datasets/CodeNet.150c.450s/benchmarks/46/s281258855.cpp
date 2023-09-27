#include <iostream>
using namespace std;
int main()
{
	while(true)
	{
		int n, x;
		cin >> n >> x;
		if( 0 == n && 0 == x)
			break;
	
		int t = 0;
		int s = (x - 3)/3;
		for(int i = 1; i <= n - 2 && i <= s; ++i){
			for( int j = i + 1; j <= n -1; ++j){
				int k = x - i - j;
				if( k > n )  continue;
				if( k <= j ) break;
				++t;
			}
		}

		cout << t << "\n";
	}

	return 0;
}