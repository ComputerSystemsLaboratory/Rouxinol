#include <iostream>
using namespace std;

int main()
{
	int nN, nM, nL;
	cin >> nN >> nM >> nL;
	long unsigned int nLeft[100][100] = { 0 };
	long unsigned int nRight[100][100] = { 0 };
	long unsigned int nResult[100][100] = { 0 };

	for (int i = 0; i < nN; i++)
	{
		for (int j = 0; j < nM; j++)
		{
			cin >> nLeft[i][j];
		}
	}
	for (int i = 0; i < nM; i++)
	{
		for (int j = 0; j < nL; j++)
		{
			cin >> nRight[i][j];
		}
	}
	for (int i = 0; i < nN; i++)
	{
		for (int j = 0; j < nL; j++)
		{
			long unsigned int nSum = 0;
			for (int k = 0; k < nM; k++)
			{
				nSum += nLeft[i][k] * nRight[k][j];
			}
			nResult[i][j] = nSum;
		}
	}
	for (int i = 0; i < nN; i++)
	{
		for (int j = 0; j < nL; j++)
		{
			cout << nResult[i][j];
			if (j != nL - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}