#include<iostream>
using namespace std;

int main()
{
	int ary[101][101] = { 0 };

	int r, c;
	cin >> r >> c;
	
	for (int j = 0; j < r; j++)
	{
		for (int i = 0; i < c; i++)
		{
			cin >> ary[j][i];
		}
	}

	//?¨?????????°???
	for (int j = 0; j < r; j++)
	{
		for (int i = 0; i < c; i++)
		{
			ary[j][c] += ary[j][i];
		}
	}

	//???????????°???
	for (int i = 0; i < c + 1; i++)
	{
		for (int j = 0; j < r; j++)
		{
			ary[r][i] += ary[j][i];
		}
	}

	//??????
	for (int j = 0; j < r + 1; j++)
	{
		for (int i = 0; i < c + 1; i++)
		{
			cout << ary[j][i];

			if (i != c)
			cout << " ";
		}
		cout << "\n";
	}



	

	return 0;
}