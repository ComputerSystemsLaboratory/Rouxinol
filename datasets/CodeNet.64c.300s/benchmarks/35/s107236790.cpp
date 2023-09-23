#include<bits/stdc++.h>

using namespace std;

#define rep(a, b) for(int i = a; i <= b; i++)

const int MAX = 1e2 + 10;
bool s[MAX][MAX];

int main()
{
	int n;
	while(~scanf("%d", &n))
	{
		rep(1, n)
		{
			int row;
			scanf("%d", &row);
			int num;
			scanf("%d", &num);
			for(int j = 1; j <= num; j++)
			{
				int column;
				scanf("%d", &column);
				s[row][column] = true;
			}
		}
		rep(1, n)
		{
			for(int j = 1; j <= n; j++)
			{
				printf("%d", s[i][j]);
				if(j != n)
					printf(" ");
				else
					printf("\n");
			}
		}
	}
	return 0;
}

