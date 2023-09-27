#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>

using namespace std;

int n;
int s;
vector<int> v;
int f;
int b;
int sum = 0;
int ans = 0;

int main() {

	while (cin >> n) {
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> s;
			v.push_back(s);
		}

		sort(v.begin(), v.end());

		f = v[0];
		b = v[v.size() - 1];

		for (int i = 0; i != v.size(); ++i) {
			sum += v[i];
		}
		sum = sum - f - b;
		ans = sum / (v.size() - 2);

		cout << ans << endl;

		v.clear();
		sum = 0;
		ans = 0;

	}
}