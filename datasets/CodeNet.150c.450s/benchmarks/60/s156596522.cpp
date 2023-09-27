#include <iostream>
using namespace std;

const int N = 100;
int m[N][N];

int main()
{

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int u, k; // k == 出次数
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++)
		{
			int v;
			cin >> v;
			v--;
			m[u][v] = 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j) cout << " ";
			cout << m[i][j];
		}
		cout << endl;
	}

    return 0;
}
