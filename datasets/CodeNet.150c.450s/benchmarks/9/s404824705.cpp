#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;


int main() {
	while (1) {
		string st; cin >> st;
		if (st == "-") {
			break;
		}
		else {
			int N; cin >> N;
			while (N--) {
				int a; cin >> a;
				string newst = st.substr(a) + st.substr(0, a);
				st = newst;
			}
			cout << st << endl;
		}
	}
	return 0;
}