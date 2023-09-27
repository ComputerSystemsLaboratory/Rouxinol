#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

const int maxn = 10005;
const int maxm = 1050;

int N, W;
int v[105], w[105];
int f[105][10050];

int main()
{
	cin >> N >> W;
	for (int i = 1; i <= N; i++)
		cin >> v[i] >> w[i];
	memset(f, 0, sizeof(f));
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= W; j++)
		{
			f[i][j] = (i == 1 ? 0 : f[i - 1][j]);
			if (j >= w[i])
				f[i][j] = max(f[i][j], f[i - 1][j - w[i]] + v[i]);
		}
	cout << f[N][W] << endl;
	return 0;
}