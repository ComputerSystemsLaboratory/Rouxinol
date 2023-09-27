#include "iostream"
using namespace std;

int main()
{
	char a;
	int n, b; 
	bool card[4][13] = {};
	//Sが0、Hが1、Cが2、Dが3
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		switch (a)
		{
		case 'S':
			card[0][b - 1] = true;
			break;
		case 'H':
			card[1][b - 1] = true;
			break;
		case 'C':
			card[2][b - 1] = true;
			break;
		case 'D':
			card[3][b - 1] = true;
			break;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (card[i][j] == false)
			{
				switch (i)
				{
				case 0:
					cout << "S";
					break;
				case 1:
					cout << "H";
					break;
				case 2:
					cout << "C";
					break;
				case 3:
					cout << "D";
					break;
				}
				cout << " " << j + 1 << endl;
			}
		}
	}
}

