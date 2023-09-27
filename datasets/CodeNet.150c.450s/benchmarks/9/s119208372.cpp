#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (;;)
	{
		string	Card;
		cin >> Card;
		if (Card == "-")		break;

		size_t	CSize = Card.size();
		Card += Card;

		int		SCnt;
		cin >> SCnt;
		int		sum = 0;
		int		h;
		for (int i = 0; i < SCnt; i++)
		{
			cin >> h;
			sum += h;
		}

		sum %= CSize;

		cout << Card.substr(sum, CSize) << endl;
	}

	return 0;
}