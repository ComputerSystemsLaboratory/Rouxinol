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
int main(){
	int n, m;
	vector<string>s; string t;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		s.push_back(t);
	}
	cin >> m;
	int now = 0;
	for (int i = 0; i < m; i++) {
		cin >> t;
		bool f = false;
		for (int j = 0; j < n; j++) {
			if (s[j] == t)f = true;
		}
		if (f) {
			if (now == 0) {
				now = 1; cout << "Opened by " << t << endl;
			}
			else {
				now = 0; cout << "Closed by " << t << endl;
			}
		}
		else cout << "Unknown " << t << endl;
	}
	return 0;
}
