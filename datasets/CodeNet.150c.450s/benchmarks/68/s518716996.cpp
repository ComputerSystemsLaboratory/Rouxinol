#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

	vector<int> result;
	while (true)
	{
		
		int n;
		int a[50000];
		cin >> n;
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a, a + n);
		int res = 1000000000;
		for (int i = 0; i < n - 1; i++) {
			if (res > a[i + 1] - a[i]) {
				res = a[i + 1] - a[i];
			}
		}
		result.push_back(res);
		
	}	

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

}