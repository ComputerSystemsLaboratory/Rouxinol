#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int key;
	vector<int> seq(n);
	for (int i = 0; i < n; i++)
	{
		cin >> seq[i];
	}
	for (int i = 0; i < n; i++)
	{
		key = seq[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (seq[j] > key)
			{
				seq[j + 1] = seq[j];
			}
			else
			{
				break;
			}
			seq[j] = key;
		}
		for (int j = 0; j < n; j++)
		{
			cout << seq[j];
			if (j == n - 1)
			{
				cout << endl;
			}
			else
			{
				cout << " ";
			}
		}
	}
}
