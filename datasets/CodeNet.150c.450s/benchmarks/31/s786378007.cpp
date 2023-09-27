#include <queue>
#include <limits>
#include <iostream>

using namespace std;

int main()
{
	int n, MAX = numeric_limits<int>::min();

	queue<int> R;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;

		cin >> temp;

		R.push(temp);

		if (MAX < R.back() - R.front() && R.size() > 1)
		{
			MAX = R.back() - R.front();
		}

		if (R.back() < R.front())
		{
			while (R.size() > 1)
			{
				R.pop();
			}
		}
	}

	cout << MAX << endl;

	return 0;
}