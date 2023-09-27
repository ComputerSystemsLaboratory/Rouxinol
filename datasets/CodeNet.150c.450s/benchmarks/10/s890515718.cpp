#include <iostream>

using namespace std;

int main ()
{
	int n[4][3][10]={},v,m,i,j,k;
	cin >> m;

	for (int a = 0; a < m; a++)
		  {
		cin >> i >> j >> k >> v;
		n[i -1][j - 1][k -1] += v;
		if (n[i - 1][j - 1][k - 1] > 9)
		{
			n[i - 1][j - 1][k - 1] = 9;
		}
		  }

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << " " << n[i][j][k];

			}
			cout << endl;


		}
		if (i < 3){
				cout << "####################" << endl;
			}


	}



}