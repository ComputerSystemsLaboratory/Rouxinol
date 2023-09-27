#include<iostream>
#include<string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
	int n,q;
	vector<int> S, T;
	cin >> n;
	int i,j;
	int ans = 0;
	for (i = 0; i < n; i++) {
		int s;
		cin >> s;
		S.push_back(s);
	}
	cin >> q;
	for (i = 0; i < q; i++) {
		int t;
		cin >> t;
		T.push_back(t);
	}
	for (i = 0; i < q; i++) {
		for (j = 0; j < n; j++) {
			if (S.at(j) == T.at(i)) {
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
}
