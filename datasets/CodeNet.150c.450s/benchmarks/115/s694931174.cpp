#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#define Lens 1005

using namespace std;
string x, y;
int C[Lens][Lens];
int N;

int com(string x,string y)
{
	int m = x.length();
	int n = y.length();
	x = ' ' + x;
	y = ' ' + y;
	for(int i=1;i<=m;i++)
		for (int j = 1; j <= n; j++)
		{
			if (x[i] == y[j])
			{
				C[i][j] = C[i - 1][j - 1] + 1;
			}
			else
			{
				C[i][j] = max(C[i - 1][j], C[i][j - 1]);
			}
		}
	return C[m][n];

}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		int ans=com(x, y);
		cout << ans << endl;
	}


	return 0;
}

