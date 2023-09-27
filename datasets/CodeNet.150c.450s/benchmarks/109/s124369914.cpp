#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int main() {
	int s[24 * 60 * 60];
	for (int n; cin >> n&&n;) {
		memset(s, 0, sizeof(s));

		for (int i = 0; i < n; i++) {
			char c;
			int shh, smm, sss, ghh, gmm, gss;
			cin >> shh >> c >> smm >> c >> sss;
			cin >> ghh >> c >> gmm >> c >> gss;

			int ss = shh * 60 * 60 + smm * 60 + sss;
			int gs = ghh * 60 * 60 + gmm * 60 + gss;

			for (int j = ss; j < gs; j++) {
				s[j]++;
			}
		}

		cout << *max_element(s, s + 24 * 60 * 60) << endl;

	}
	return 0;
}