#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<vector<int>>v(n);
	for (int i = 0; i < n; i++)
	{
		int u;
		cin >> u;
		v[i].push_back(u);
		int k;
		cin >> k;
		v[i].push_back(k);
		for (int j = 0; j < k; j++)
		{
			int number;
			cin >> number;
			v[i].push_back(number);
		}
	}
	vector <vector<int>>answer(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			answer[i][j] = 0;
		}

	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < v[i].size()-2; j++)
		{
			answer[v[i][0]-1][v[i][2 + j]-1 ]= 1;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			cout << answer[i][j]<<" ";
		}
		cout << answer[i][n - 1] << endl;
		
	}
}
/*
1 2 2 4
2 1 4
3 0
4 1 3


*/
