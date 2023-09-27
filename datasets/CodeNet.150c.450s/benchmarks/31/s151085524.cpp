#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, input, maxv, minv;
	cin >> N;

	cin >> input;
	minv = input;
	maxv = -input;
	for (int i = 1;i < N;i++)
	{
		cin >> input;
		maxv = max(maxv, input - minv);
		minv = min(minv, input);
	}

	cout << maxv << endl;

	return 0;
}