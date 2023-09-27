#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int C[1001][1001];
string N1, N2;

int lcs()
{
	int m = N1.size();
	int n = N2.size();
	int maxl = 0;

	N1 = " " + N1;
	N2 = " " + N2;

	for (int i = 1; i <= m; i++)
		C[i][0] = 0;
	for (int i = 1; i <= n; i++)
		C[0][i] = 0;

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (N1[i] == N2[j])
				C[i][j] = C[i - 1][j - 1] + 1;
			else
				C[i][j] = max(C[i - 1][j], C[i][j - 1]);

			maxl = max(maxl, C[i][j]);
		}
	}

	return maxl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int q;

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> N1 >> N2;
		cout << lcs() << endl;
	}
		
	return 0;                                                                            
}
