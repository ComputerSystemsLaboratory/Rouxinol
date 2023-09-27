#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int nN, nM;
	cin >> nN >> nM;

	int nArr[100][100] = {}; //all 0
	int nB[100] = {};
	for (size_t i = 0; i < nN; ++i)
	{
		for (size_t j = 0; j < nM; ++j)
		{
			cin >> nArr[i][j];
		}
	}

	for (size_t i = 0; i < nM; i++)
	{
		cin >> nB[i];
	}
	for (size_t i = 0; i < nN; i++)
	{
		int nSum = 0;
		for (size_t j = 0; j < nM; j++)
		{
			nSum += nArr[i][j] * nB[j];
		}
		cout << nSum << endl;
	}

	//system("pause");
	return 0;
}