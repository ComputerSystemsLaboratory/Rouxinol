#include <iostream>
#include <set>
#include <map>

using namespace std;

long long int maxmin(long long int a, long long int l) {
	int b[10] = { 0 };
	int c = 0;
	while (a != 0) {
		b[a % 10]++;
		a /= 10;
		c++;
	}
	b[0] += (l - c);
	long long int MAX = 0;
	long long int MIN = 0;
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < b[i]; j++) {
			MAX *= 10;
			MAX += i;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < b[i]; j++) {
			MIN *= 10;
			MIN += i;
		}
	}
	return MAX - MIN;
}

int main() {

	long long int a, l;
	while (cin >> a >> l) {
		if (a == 0 && l == 0) {
			break;
		}
		set<long long int> st;
		map<long long int, long long int> mp;
		st.insert(a);
		mp[a] = 0;
		long long int ans = 0;
		while (true) {
			ans++;
			long long int a2 = maxmin(a, l);
			a = a2;
			if (st.find(a) != st.end()) {
				break;
			}
			st.insert(a);
			mp[a] = ans;
		}
		cout << mp[a] << ' ' << a << ' ' << ans-mp[a] << endl;
	}

	return 0;
}
