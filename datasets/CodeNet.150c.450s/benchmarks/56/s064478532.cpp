#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	int n;
	long long sum = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum = sum + v[i];
	}
	sort(v.begin(), v.end());
	cout << v[0] << " " << v[n - 1] << " " << sum << endl;
}
