#include <iostream>
#include <map>
using namespace std;


int MarkToIndex(char mark)
{
	if (mark == 'S') return 0;
	if (mark == 'H') return 1;
	if (mark == 'C') return 2;
	if (mark == 'D') return 3;

	return -1;
}
char IndexToMark(int index)
{
	if (index == 0) return 'S';
	if (index == 1) return 'H';
	if (index == 2) return 'C';
	if (index == 3) return 'D';

	return -1;
}


int main()
{
	bool card[4][13] = { 0 };
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		char mark;
		int number;
		cin >> mark >> number;

		card[MarkToIndex(mark)][number - 1] = true;
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			if (!card[i][j]) cout << IndexToMark(i) << " " << j + 1 << endl;
		}
	}

	return 0;
}