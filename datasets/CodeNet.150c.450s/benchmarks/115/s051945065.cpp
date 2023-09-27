
#include<iostream>
#include<string>
using namespace std;

#define MAX 150
#define MAXL 1000

int C[MAXL + 1][MAXL + 1];

int lec(string X, string Y)
{
	int XL = X.length();
	int YL = Y.length();
	X = ' ' + X;
	Y = ' ' + Y;
	for (int i = 0; i <=XL; i++)
		C[i][0] = 0;
	for (int i = 0; i <=YL; i++)
		C[0][i] = 0;
	for (int i = 1; i <=XL; i++)
	{
		for (int j = 1; j <=YL; j++)
		{
			if (X[i] == Y[j])
			{
				C[i][j] = C[i - 1][j - 1] + 1;
			}
			else if (C[i - 1][j] > C[i][j - 1])
			{
				C[i][j] = C[i - 1][j];
			}
			else{
				C[i][j] = C[i][j - 1];
			}
		}
	}
	return C[XL][YL];
}

int main()
{
	int q;
	string x, y;
	cin >> q;
	for (int i = 0; i<q; i++)
	{
		cin >> x >> y;
		cout << lec(x, y) << endl;
	}
	return 0;
}





