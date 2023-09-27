#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<bool> S(31, false);

	int A;

	for (int i = 0; i < 28; i++)
	{
		cin >> A;

		S[A] = true;
	}

	for (int i = 1; i < 31; i++)
	{
		if (S[i] == false)
		{
			cout << i << endl;
		}
	}

	return 0;
}