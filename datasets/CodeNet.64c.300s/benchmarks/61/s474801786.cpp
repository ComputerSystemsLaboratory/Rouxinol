#include <iostream>
using namespace std;

int main() {
	int r, c;
	int ori_table[100][100] = {0};
	int res_table[101][101] = {0};

	cin >> r >> c;
	for(int i = 0; i<r; i++)
		for (int j = 0; j < c; j++)
		{
			cin >> ori_table[i][j];
		}

	for (int i = 0; i < r + 1; i++)
	{
		if(i!=r)
		for (int j = 0; j < c + 1; j++)
		{
			if (j != c)
			{
				res_table[i][j] = ori_table[i][j];
				res_table[i][c] += ori_table[i][j];
				res_table[r][j] += ori_table[i][j];
				cout << res_table[i][j] << " ";
			}
			else
			{
				res_table[r][c] += res_table[i][c];
				cout << res_table[i][c] <<endl;
			}

		}
		else
			for (int j = 0; j < c + 1; j++)
			{
				if(j<c)
					cout << res_table[r][j] << " ";
				else
					cout << res_table[r][j] << endl;
			}
	}

	return 0;
}