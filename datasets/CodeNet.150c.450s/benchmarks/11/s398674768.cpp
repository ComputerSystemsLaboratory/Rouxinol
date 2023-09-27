#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Variable declaration
	int n;
	string inptn;
	int innum;
	bool cards[4][13];

	// cards initializ. To all false.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			cards[i][j] = false;
		}
	}

	// Input n
	cin >> n;

	// n times loop
	for (int i = 0; i < n; i++)
	{
		// Input inptn and innum
		cin >> inptn >> innum;

		if (innum < 1 || innum > 13)
		{
			i--;
			continue;
		}
		// If there is a card. To the true from the false
		if (inptn == "S")
		{ // Case of Spades
			cards[0][innum - 1] = true;
		}
		else if (inptn == "H")
		{ // Case of Hearts
			cards[1][innum - 1] = true;
		}
		else if (inptn == "C")
		{ // Case of Clubs
			cards[2][innum - 1] = true;
		}
		else if (inptn == "D")
		{ // case of Diamonds
			cards[3][innum - 1] = true;
		}
		else
		{
			i--;
			continue;
		}
	}

	// 4 times loop
	for (int i = 0; i < 4; i++)
	{
		// 13 times loop
		for (int j = 0; j < 13; j++)
		{
			if (cards[i][j] == false)
			{
				// output
				switch (i)
				{
					case 0: // Case of Spades
						cout << "S " << j + 1 << endl;
						break;

					case 1: // Case of Hearts
						cout << "H " << j + 1 << endl;
						break;

					case 2: // Case of Clubs
						cout << "C " << j + 1 << endl;
						break;

					case 3: // Case of Diamonds
						cout << "D " << j + 1 << endl;
						break;
				}
			}
		}
	}

	return 0;
}