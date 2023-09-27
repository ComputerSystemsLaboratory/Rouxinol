#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
	int i,n, sum1, sum2;
	sum1 = 0; sum2 = 0;
	string s, t;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s; cin >> t;
		if (s < t) {
			sum2 += 3;
		}
		else if (s > t) {
			sum1 += 3;
		}
		else if (s == t) {
			sum1 += 1; sum2 += 1;
		}
	}
	cout << sum1 << " " << sum2 << endl;
	return 0;
}
