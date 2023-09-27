#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.txt"
 


int main() {
	string st = "SHCD";
	vector<vector<int>>oks(4, vector < int>(13));
	int N; cin >> N;
	for (int i = 0; i < N; ++i) {
		char c; int a; cin >> c >> a;
		int n = st.find(c) - 0;
		a--;
		oks[n][a] = true;
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 13; ++j) {
			if (!oks[i][j]) {
				cout << st[i] << " " << j + 1 << endl;
			}
		}
	}
	
	return 0;
}