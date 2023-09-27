#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	while (1) {
		int a;
		cin >> a;
		if (a == 0)break;
		vector<int>s(a);
		int m = 0;
		for (int b = 0; b < a; b++) {
			int d;
			cin >> d;
			s[b] = d;
			m += d;
		}
		sort(s.begin(), s.end());
		cout << (m - s[0] - s[s.size() - 1]) / (a-2) << endl;
	}
}