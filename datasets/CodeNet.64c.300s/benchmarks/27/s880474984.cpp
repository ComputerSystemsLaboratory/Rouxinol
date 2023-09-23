#include<iostream>
using namespace std;
int main()
{
	int m, n, i, j, k, sum ;
	while (cin>>n>>m)
	{
		sum = 0;
		if (m == 0 && n == 0)break;
		for (i = 1; i <= n; i++)
			for (j = i + 1; j <= n; j++)
				for (k = j + 1; k <= n; k++)
					if (i + k + j == m)
						sum++;	
		cout << sum << endl;		
	}
	
	return 0;
}
