#include <vector>
#include <iostream>

using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

	vector<unsigned int> v(n);
	for (unsigned int i = 0; i < n; ++i)
		cin >> v[i];

	for (unsigned int j = 0; j < n - 1; ++j)
		cout << v[j] << " ";
	cout << v[n - 1] << endl;
	for (unsigned int i = 1; i < n; ++i) {
		unsigned int t = v[i];
		int j = i - 1;
		while (j >= 0 && v[j] > t) {
			v[j+1] = v[j];
			--j;
		}
		v[j+1] = t;
		for (unsigned int j = 0; j < n - 1; ++j)
			cout << v[j] << " ";
		cout << v[n - 1] << endl;
	}

	return 0;
}

