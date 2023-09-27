#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<vector<int>> matrix(N, vector<int>(M));
	for(auto it = matrix.begin(); it != matrix.end(); it++)
	{
		for(auto itx = it->begin(); itx != it->end(); itx++)
		{
			cin >> *itx;
		}
	}
	
	vector<int> low_v(M);
	for(auto it = low_v.begin(); it != low_v.end(); it++)
	{
		cin >> *it;
	}
	
	for(int i = 0; i < N; i++)
	{
		int ans = 0;
		for(int j = 0; j < M; j++)
		{
			ans += matrix[i][j] * low_v[j];
		}
		
		cout << ans << endl;
	}
	return 0;
}