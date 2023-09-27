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
	int a, b, c, d, e, f, g, h; cin >> a >> b >> c >> d >> e >> f >> g >> h;
	cout << max(a + b + c + d, e + f + g + h) << endl;
	return 0;
}