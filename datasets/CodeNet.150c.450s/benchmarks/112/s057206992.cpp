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
		map<char, char>convert;
		for (int i = 0; i < N; ++i) {
			char a, b; cin >> a >> b;
			convert[a] = b;
		}
		int M; cin >> M;
		while (M--) {
			char c; cin >> c;
			if (convert.find(c) == convert.end())cout << c;
			else cout << convert[c];
		}
		cout << endl;
	}
	
	return 0;
}