#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	int n, r, p, c;
	int i,j;
	while (cin >> n >> r) {
		if (n == 0 && r == 0)break;
		int sta[50]; int copsta[50];
		for (i = 0; i < n; i++) {
			sta[i] = n-i;
		}
		for (i = 0; i < r; i++) {
			for (j = 0; j < n; j++) {
				copsta[j] = sta[j];
			}
			cin >> p >> c;
			for (j = 0; j < p + c - 1; j++) {
				if (j < c) {
					sta[j] = copsta[j + p-1];
				}
				else sta[j] = copsta[j - c];
			}
		}
		cout << sta[0] << endl;
	}
	return 0;
}
