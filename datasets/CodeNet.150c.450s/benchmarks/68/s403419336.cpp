#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<long long>e;
	int n;
	while (cin >> n) {
		if (n == 0)break;
		vector<long long>l;
		for (int i = 0; i < n; i++) {
			long long a; cin >> a;
			l.push_back(a);
		}
		sort(l.begin(), l.end());
		long long num = l[1] - l[0];
		for (int i = 1; i < n - 1; i++)
			num = min(num, l[i + 1] - l[i]);
		e.push_back(num);
	}
	for (long long l : e) 
		cout << l << endl;
	return 0;
}