#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main() {
	int n, m, l;
	// ?¢???????????????????????´???°
	cin >> n >> m >> l;

	// ??????????¢????
	vector<vector<int>> A, B;
	vector<vector<long long>> C;
	A.resize(n);
	for (int i = 0; i < A.size(); i++)
	{
		A[i].resize(m);
	}
	B.resize(m);
	for (int i = 0; i < B.size(); i++)
	{
		B[i].resize(l);
	}
	C.resize(n);
	for (int i = 0; i < C.size(); i++)
	{
		C[i].resize(l);
	}
	// A,B????????\???
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < A[0].size(); j++)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < B.size(); i++)
	{
		for (int j = 0; j < B[0].size(); j++)
		{
			cin >> B[i][j];
		}
	}

	// ?¨????
	int i;
	long long c;
	for (i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B[0].size(); j++)
		{
			c = 0;
			for (int k = 0; k < B.size(); k++)
			{
				c += A[i][k] * B[k][j];
			}
			C[i][j] = c;
		}
	}

	// ??????
	for (int i = 0; i < C.size(); i++)
	{
		for (int j = 0; j < C[0].size(); j++)
		{
			cout << C[i][j];
			if (j != C[0].size() - 1) cout << " ";
				
		}
		cout << endl;
	}	
	return 0;
}