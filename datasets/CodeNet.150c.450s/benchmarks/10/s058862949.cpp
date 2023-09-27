#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector< vector<int> > b(4, vector<int>(30, 0));

	for (int i = 0; i < n; ++i)
	{
		vector<int> t(4, 0);

		for (int j = 0; j < 4; ++j)
			cin >> skipws >> t[j];

		b[t[0]-1][(10 * (t[1]-1)) + t[2]-1] += t[3];
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 30; ++j)
		{
			cout << " " << b[i][j];
			if (j % 10 == 9)
				cout << endl;
		}

		if (i < 3)
			cout << "####################" << endl;
	}

	return 0;
}