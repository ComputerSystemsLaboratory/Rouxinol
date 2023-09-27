#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#define loop(i,n) for(int i = 0; i < n; i++)
#define FOR(x,y,z) for(int x = y; x < z; x++)
#define INM 1145141919;
#define VEC vector<int>
#define in push_back
#define ans(x) cout<<x<<endl
#define ll long long int 

using namespace std;

long long int dp[100][21] = { 0 };
int num[101];

int main()
{
	int n;
	cin >> n;
	loop(i, n)
	{
		cin >> num[i];
	}
	dp[0][num[0]] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (dp[i - 1][j] != 0)
			{
				int bef = num[i];
				if (j + bef <= 20)
				{
					dp[i][j + bef] += dp[i - 1][j];
				}
				if (j - bef >= 0)
				{
					dp[i][j - bef] += dp[i - 1][j];
				}
				continue;
			}
		}
	}
	cout << dp[n - 1][0] << endl;
}