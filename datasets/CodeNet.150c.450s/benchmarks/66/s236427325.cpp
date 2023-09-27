#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

const int My_Inf=2147483647;
const long long int My_LInf=9223372036854775807;

int main() {
	int n; cin >> n;
	set<string>sts;
	for (int i = 0; i < n; ++i) {
		string st; cin >> st;
		sts.emplace(st);
	}
	int m; cin >> m;
	bool close = true;
	for (int i = 0; i < m; ++i) {
		string st; cin >> st;
		if (sts.find(st) != sts.end()) {
			if (close) {
				cout << "Opened by " << st << endl;
			}
			else {
				cout << "Closed by " << st << endl;
			}
			close = !close;
		}
		else {
			cout << "Unknown " << st << endl;
		}
	}
	return 0;
}