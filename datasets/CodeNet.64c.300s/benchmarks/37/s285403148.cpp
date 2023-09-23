#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	int n;
	while ( cin >> n && n )
	{
		int answer = 0;
		int right = n - 1;
		int left = right - 1;

		while ( left > 0 && right > 0 )
		{
			int sum = ( right - left + 1 ) * ( left + right ) / 2;
			if ( sum == n )
			{
				answer++;
				right--;
				while ( left >= right ) left--; 
			}
			else if ( sum > n )
			{
				right--;
				while ( left >= right ) left--; 
			}
			else if ( sum < n )
			{
				left--;
			}
		}

		cout << answer << endl;
	}
	return 0;
}