#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

char S[2][2000];
int length[2];//length[a] == b ?????? S[a][b] == *""
int changed = 0;
int dp[1500][1500];

int main()
{
	cin >> S[0];
	cin >> S[1];

	for (int a = 0; a < 1000; a++)
	{
		if (S[0][a] == 0)
		{
			length[0] = a;
			break;
		}
	}

	length[0] = strlen(S[0]);
	length[1] = strlen(S[1]);

	for (int a = 0; a < 1000; a++)
	{
		if (S[1][a] == 0)
		{
			length[1] = a;
			break;
		}
	}

	for (int a = 0; a < length[0]+1; a++)
	{
		dp[0][a] = a;
	}
	for (int a = 0; a < length[1]+1; a++)
	{
		dp[a][0] = a;
	}

	for (int a = 1; a < length[0]+1; a++)
	{
		for (int b = 1; b < length[1]+1; b++)
		{
			if (S[0][a-1] == S[1][b-1])
			{
				dp[b][a] = min(dp[b - 1][a - 1], min(dp[b - 1][a] + 1, dp[b][a - 1] + 1));
			}
			else
			{
				dp[b][a] = min(dp[b - 1][a - 1], min(dp[b - 1][a], dp[b][a - 1])) + 1;
			}
		}
	}

	cout << dp[length[1]][length[0]] << endl;

	return 0;
}