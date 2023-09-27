#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n = -1;

	vector<int> score;

	while (true)
	{
		int sum = 0;

		cin >> n;

		if (n == 0) { break; }

		vector<int> D(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> D[i];

			sum += D[i];
		}

		sum -= *max_element(D.begin(), D.end());
		sum -= *min_element(D.begin(), D.end());

		score.push_back(static_cast<int>(sum / (D.size() - 2) + 0.5));
	}

	for (int i = 0; i < score.size(); i++)
	{
		cout << score[i] << endl;
	}

	return 0;
}