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
	priority_queue<int>que;
	while (1) {
		string st; cin >> st;
		if (st == "end")break;
		else if (st == "insert") {
			int n; cin >> n;
			que.push(n);
		}
		else if (st == "extract") {
			cout << que.top() << endl;
			que.pop();
		}
	}
	return 0;
}