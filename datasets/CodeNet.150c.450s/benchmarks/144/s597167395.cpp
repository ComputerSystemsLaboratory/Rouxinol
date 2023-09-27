#include <iostream>
using namespace std;
int main() {
	int n, m, l;
	long m_a[100][100] = { 0 };
	long m_b[100][100] = { 0 };
	long m_res[100][100] = { 0 };

	cin >> n >> m >> l;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> m_a[i][j];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < l; j++)
			cin >> m_b[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			for (int x = 0; x < m; x++)
				m_res[i][j] += m_a[i][x] * m_b[x][j];
			cout << m_res[i][j];
			if (j < l - 1)
				cout << " ";
		}
		cout << endl;
	}
}