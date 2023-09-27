#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int l;
	string s;
	while (cin >> s >> l, l) {
		int cnt = 0;
		vector<string>v;

		while (s.size() < l)s = '0' + s;
			
		v.push_back(s);
		
		while (1) {

			string big(s), small(s);

			sort(small.begin(), small.end());
			sort(big.begin(), big.end(), greater<int>());
			s = to_string(stoi(big) - stoi(small));
			while (s.size() < l)s = '0' + s;
			v.push_back(s);
			int f = distance(v.begin(), find(v.begin(), v.end(), s));


			if (f!=v.size()-1) {
				cout << f << " " << stoi(s) << " " << v.size()-1-f << endl;
				break;
			}
		}
	}
	return 0;
}