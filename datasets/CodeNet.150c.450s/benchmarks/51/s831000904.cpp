#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
int main() {
	vector<bool>oks(30);
	for (int i = 0; i < 28; ++i) {
		int a; cin >> a; a--;
		oks[a] =true;
	}
	for (int i = 0; i < 30; ++i) {
		if (!oks[i]) {
			cout << i + 1 << endl;
		}
	}
	return 0;
}