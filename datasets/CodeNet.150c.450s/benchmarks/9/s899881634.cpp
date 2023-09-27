#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	string S;
	int m;
	char x;
	while (cin >> S) {
		if (S == "-") {
			break;
		}
		cin >> m;
		vi h(m);
		for (int i = 0; i < m; i++) {
			cin >> h[i];
			for (int j = 0; j < h[i]; j++) {
				x = S[0];
				for (int k = 0; k < S.size() - 1; k++) {
					S[k] = S[k + 1];
				}
				S[S.size() - 1] = x;
			}
		}
		cout << S << endl;
	}
}