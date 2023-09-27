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
	int N; cin >> N;
	int amin = 1e9;
	int ans = -2e9;
	for (int i = 0; i < N;++i){
		int a; cin >> a;
		if (i) {

			ans = max(ans, a - amin);
		}
		amin = min(amin, a);
	}
	cout << ans << endl;
	return 0;
}