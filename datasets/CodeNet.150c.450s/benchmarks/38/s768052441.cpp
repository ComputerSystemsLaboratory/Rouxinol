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
	int N; cin >> N;
	while (N--) {
		int a, b, c; cin >> a >> b >> c;
		if (a > b)swap(a, b);
		if (b > c)swap(c, b);
		if (a*a + b*b ==c* c)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}