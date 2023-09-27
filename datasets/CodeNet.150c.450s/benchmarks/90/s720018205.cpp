#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a(101, 0);
	int n, max = 0;
	
	while (cin >> n, n != 4)
	{
		a[n]++;
		if (a[n] > max) max = a[n];
	}

	for (int i = 1; i < a.size(); ++i)
		if (a[i] == max) cout << i << endl;

	return 0;
}