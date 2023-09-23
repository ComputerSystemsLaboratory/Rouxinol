#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int gyoretu[100][100];
	int vector[100];

	//行列読み込み
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int input;
			cin >> input;
			gyoretu[i][j] = input;
		}
	}

	//ベクトル読み込み
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		vector[i] = input;
	}
	
	//演算
	for (int i = 0; i < n; i++)
	{
		int ax = 0;

		for (int j = 0; j < m; j++)
		{
			ax += (gyoretu[i][j] * vector[j]);
		}
		cout << ax << endl;
	}
}
