#include <string>
#include <iostream>

using namespace std;

const string R[10] = { ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

int main()
{
	int n; scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		string S; cin >> S;

		int count_ = 0;

		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == '0')
			{
				if (count_ != 0)
				{
					cout << R[S[i - 1] - 49][(count_ - 1) % R[S[i - 1] - 49].size()]; count_ = 0;
				}
			}
			else
			{
				count_++;
			}
		}

		cout << endl;
	}

	return 0;
}