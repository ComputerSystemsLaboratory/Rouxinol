#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int H; cin >> H;

	vector<int> key(H + 1, 0);

	for (int i = 1; i <= H; i++)
		cin >> key[i];

	for (int i = 1; i <= H; i++)
	{
		cout << "node " << i << ": key = " << key[i] << ", ";

		if (i / 2 != 0)
		{
			cout << "parent key = " << key[i / 2] << ", ";
		}

		if (2 * i <= H)
		{
			cout << "left key = " << key[2 * i] << ", ";
		}

		if (2 * i < H)
		{
			cout << "right key = " << key[2 * i + 1] << ", ";
		}

		cout << endl;
	}

	return 0;
}