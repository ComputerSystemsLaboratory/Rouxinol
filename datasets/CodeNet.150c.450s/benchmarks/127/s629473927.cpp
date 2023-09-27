#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int n;
	cin >> n;
	while (n--) {
		set<string>st;
		string s;
		cin >> s;
		for (int i = 1; i < s.size() ; i++) {
			string s1, s2,s1r,s2r;
			s1 = s.substr(0, i);
			s2 = s.substr(i, s.size() - i);
			s1r = s1;
			s2r = s2;
			reverse(s1r.begin(), s1r.end());
			reverse(s2r.begin(), s2r.end());

			st.insert(s1 + s2);
			st.insert(s1 + s2r);
			st.insert(s1r + s2);
			st.insert(s1r + s2r);
			st.insert(s2 + s1);
			st.insert(s2 + s1r);
			st.insert(s2r + s1);
			st.insert(s2r + s1r);

			
		}
		cout << st.size() << endl;

	}
	return 0;
}