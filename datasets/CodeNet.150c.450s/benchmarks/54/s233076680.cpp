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
	string W, T;
	int n = 0,m;
	m = 'A' - 'a';
	cin >> W;
	for (int i = 0; i < W.size(); i++) {
		if (W[i] >= 'A'&&W[i] <= 'Z') {
			W[i] = W[i] - m;
		}
	}
	while (cin >> T) {
		if (T=="END_OF_TEXT") {
			break;
		}
		for (int i = 0; i < T.size(); i++) {
			if (T[i] >= 'A'&&T[i] <= 'Z') {
				T[i] = T[i] - m;
			}
		}
		if (W.size() == T.size()) {
        	if (T.find(W, 0) != string::npos) {
				n++;
			}
		}
	}
	cout << n << endl;
}