#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	int card_num=0;
	int count=0;
	int num=0;
	int S[13] = {};
	int H[13] = {};
	int C[13] = {};
	int D[13] = {};
	char mark;

	cin >> card_num;

	while (count<card_num)
	{
		cin >> mark >> num;
		switch (mark)
		{
		case 'S':
			S[num - 1] = num;
			break;
		case 'H':
			H[num - 1] = num;
			break;
		case 'C':
			C[num - 1] = num;
			break;
		case 'D':
			D[num - 1] = num;
			break;
		}
		count++;
	}
	for (int i = 0; i<13; i++)
		if (S[i] == 0)
			cout << "S " << i + 1 << endl;

	for (int i = 0; i<13; i++)
		if (H[i] == 0)
			cout << "H " << i + 1 << endl;

	for (int i = 0; i<13; i++)
		if (C[i] == 0)
			cout << "C " << i + 1 << endl;

	for (int i = 0; i<13; i++)
		if (D[i] == 0)
			cout << "D " << i + 1 << endl;

	return 0;

}