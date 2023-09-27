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
		int M, Nmin, Nmax; cin >> M >> Nmin >> Nmax;
		if (!M)break;
		vector<int>vs(M);
		for (int i = 0; i < M; ++i)cin >> vs[i];
		sort(vs.begin(), vs.end(), greater<int>());
		int ans = 0;
		int num = -1;
		for (int i = Nmax-1; i >= Nmin-1; --i) {
			int n = vs[i] - vs[i + 1];
			if (n > num) {
				ans = i;
				num = n;
			}
		}
		cout << ans+1 << endl;
	}
	
	return 0;
}