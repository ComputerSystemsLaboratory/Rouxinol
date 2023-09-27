#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<bool> S(14, false), H(14, false), C(14, false), D(14, false);
	char suit;
	int num;

	while (n--)
	{
		cin >> suit >> num;

		switch (suit)
		{
		case 'S': S[num] = true; break;
		case 'H': H[num] = true; break;
		case 'C': C[num] = true; break;
		case 'D': D[num] = true; break;
		}
	}

	for (int i = 1; i <= 13; ++i)
		if (!S[i]) cout << "S " << i << endl;

	for (int i = 1; i <= 13; ++i)
		if (!H[i]) cout << "H " << i << endl;

	for (int i = 1; i <= 13; ++i)
		if (!C[i]) cout << "C " << i << endl;

	for (int i = 1; i <= 13; ++i)
		if (!D[i]) cout << "D " << i << endl;

	return 0;
}