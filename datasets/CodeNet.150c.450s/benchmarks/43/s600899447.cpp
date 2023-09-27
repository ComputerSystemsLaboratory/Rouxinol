#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.answer"
int main() {
	while (1) {
		int N; cin >> N;
		if (!N)break;
		int as = 0, bs = 0;
		for (int i = 0; i < N; ++i) {
			int a, b; cin >> a >> b;
			if (a > b) {
				as += a + b;

			}
			else if (b > a) {
				bs += a + b;
			}
			else {
				as += a;
				bs += b;
			}

		}
		cout << as << " " << bs << endl;
	}
	
	return 0;
}