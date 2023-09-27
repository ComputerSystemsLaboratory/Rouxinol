#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	string n;
	while (cin >> n, n != "0") {
		int ans = 0;
		for (int i = 0; i < n.size(); ++i) {
			ans += n[i]-'0';
		}
		cout << ans << endl;
	}
}