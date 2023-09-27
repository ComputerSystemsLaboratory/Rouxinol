#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a(5);
	for (int i = 0; i < a.size(); ++i)
		cin >> a[i];

	sort(a.begin(), a.end(), greater<int>());

	cout << a[0];
	for (int i = 1; i < a.size(); ++i)
		cout << " " << a[i];
	cout << endl;

	return 0;
}