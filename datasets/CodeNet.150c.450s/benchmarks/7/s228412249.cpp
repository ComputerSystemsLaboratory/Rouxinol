#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> H(10);
	for (int i = 0; i < 10; ++i)
		cin >> H[i];

	sort(H.begin(), H.end(), greater<int>());

	for (int i = 0; i < 3; ++i)
		cout << H[i] << endl;

	return 0;
}