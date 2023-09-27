#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

const int My_Inf=2147483647;
const long long int My_LInf=9223372036854775807;

int main() {
	while (1) {
		int x, y, s; cin >> x >> y >> s;
		if (!x)break;
		int ans=0;
		for (int i = 1; i<= s - 1; ++i) {
			int a = int(double(i)*(1. + double(x) / 100.)+1e-4);
			for (int j = i; j <= s - 1; ++j) {
				int b = int(double(j)*(1. + double(x) / 100.) + 1e-4);
				if (a + b == s) {
					ans = max(ans, int(double(i)*(1. + double(y) / 100.) + 1e-4)+ int(double(j)*(1. + double(y) / 100.) + 1e-4));
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}