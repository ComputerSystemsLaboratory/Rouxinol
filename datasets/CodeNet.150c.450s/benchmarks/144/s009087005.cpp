#include<iostream>
#include<vector>
using namespace std;

typedef unsigned long long ULL;

int main()
{
	ULL N, M, L;
	cin >> N >> M >> L;
	
	vector<vector<ULL>> matrix(N, vector<ULL>(M));
	for(auto it = matrix.begin(); it != matrix.end(); it++)
	{
		for(auto itx = it->begin(); itx != it->end(); itx++)
		{
			cin >> *itx;
		}
	}
	
	vector<vector<ULL>> matrix_B(M, vector<ULL>(L));
	for(auto it = matrix_B.begin(); it != matrix_B.end(); it++)
	{
		for(auto itx = it->begin(); itx != it->end(); itx++)
		{
			cin >> *itx;
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < L; j++)
		{
			ULL ans = 0;
			
			for(int k = 0; k < M; k++)
			{
				ans += matrix[i][k] * matrix_B[k][j];
			}
			
			cout << ans;
			if(j + 1 != L)cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}