#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, hen[3];

	cin >> n;

	while (n--)
	{
		cin >> hen[0] >> hen[1] >> hen[2];
		sort(hen, hen + 3);
		if (hen[2] * hen[2] == hen[1] * hen[1] + hen[0] * hen[0]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}