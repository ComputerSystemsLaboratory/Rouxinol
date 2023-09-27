#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int x;
	vector<vector<int>>matrix(n, vector<int>(m,0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			
			cin >> x;
			matrix[i][j] = x;
		}
	}
	vector<int>v(m);
	for (int i = 0; i < m; i++)

	{
		
		cin >> x;
		v[i] = x;
	}
	vector<int>answer(n, 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m;j++)
		{
			
			answer[i] += matrix[i][j] * v[j];
		}
		
	}
	for (int i = 0; i < n; i++)
	{
		cout << answer[i] << endl;
	}

		
}
