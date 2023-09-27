#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tl3;



const int BIG_NUM = 1e9;
const ll INF = 1000000000000000000;
const ll MOD = 1e9 + 7;
//const ll MOD = 998244353;


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<ll> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		string s;
		cin >> s;

		vector<ll> b;
		bool canConsist = true;
		for (int i = n - 1; i >= 0; i--) {
			for (auto x : b) {
				a[i] = min(a[i], a[i]^x);
			}

			if (a[i] > 0) {
				if (s[i] == '1') {
					cout << 1 << endl;
					canConsist = false;
					break;
				}

				b.emplace_back(a[i]);
			}

			
			
		}
		if (!canConsist) {
			continue;
		}
		

		
		cout << 0 << endl;
		
		
	}
}