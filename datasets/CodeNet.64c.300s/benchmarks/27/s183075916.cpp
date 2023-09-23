#include<iostream>
using namespace std;
int main()
{
int n, x, y, i, j, k, sum;
while(1)
{
	cin >> n >> x;
	if ( n == 0 && x == 0)break;
	else
	{
		sum = 0;
		for( i = 1; i <= n; i++)
		{
			for( j = 1; j <= n; j++)
			{
				if ( i == j )break;
				else
				{
					for( k = 1; k <= n; k++ )
					{
						if ( k == i || k == j )break;
						else
						{
							y = i + j + k;
							if ( y == x )sum++;
						}
					}
				}
			}
		} 
		cout << sum << endl;
	}
}

return 0;
}