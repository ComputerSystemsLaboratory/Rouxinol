
#include "bits/stdc++.h"
using namespace std;


bool isso(long long int a) {
	if (a == 1 || a == 0)return false;
	for (long long int i = 2; i*i <= a; ++i) {
		if ((a%i)) {
		}
		else {
			return false;
		}
	}
	return true;
}
int main() {
	while (1) {
		int n; cin >> n;
		if (!n)break;
		int aa[100000];
		memset(aa, 0, sizeof(aa));
		for (int i = 0; i < n; ++i) {
			int t[2];
			for (int j = 0; j < 2; ++j) {
				int atime = 0;
				string st; cin >> st;
				atime += stoi(st.substr(0, 2)) * 3600;
				atime += stoi(st.substr(3, 2)) * 60;
				atime += stoi(st.substr(6, 2));
				t[j] = atime;
			}
			aa[t[0]] += 1;
			aa[t[1]] -= 1;
		}
		int now = 0;
		int amax = 0;
		for (int i = 0; i < 100000; ++i) {
			now += aa[i];
			amax = max(now, amax);
		}
		cout << amax << endl;
	}
	return 0;
}