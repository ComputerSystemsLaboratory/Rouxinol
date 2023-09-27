#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <functional>
using namespace std;

int main()
{
	int n;
	bool card[4][13];

	cin >> n;
	memset(card, false, sizeof(card));
	for (int i = 0; i < n; i++)
	{
		char suit;
		int num;

		cin >> suit >> num;

		switch (suit)
		{
			case 'S':
				card[0][num - 1] = true;
				break;

			case 'H':
				card[1][num - 1] = true;
				break;

			case 'C':
				card[2][num - 1] = true;
				break;

			case 'D':
				card[3][num - 1] = true;
				break;

			default:
				break;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (!card[i][j])
			{
				switch (i)
				{
				case 0:
					cout << "S " << j + 1 << endl;
					break;

				case 1:
					cout << "H " << j + 1 << endl;
					break;

				case 2:
					cout << "C " << j + 1 << endl;
					break;

				case 3:
					cout << "D " << j + 1 << endl;
					break;

				default:
					break;
				}
			}
		}
	}
	return 0;
}