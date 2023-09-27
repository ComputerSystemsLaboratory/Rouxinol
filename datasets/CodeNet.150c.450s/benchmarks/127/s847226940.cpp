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
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double root2 = sqrt(2);
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	int m; string s;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> s;
		vector<string> t;
		int n = s.length();
		string u, v;
		t.push_back(s);
		for (int j = 0; j < n - 1; j++) {
			u = s.substr(0, j + 1);
			v = s.substr(j + 1, n - j - 1);
			t.push_back(v + u);
			reverse(u.begin(),u.end());
			t.push_back(u + v); t.push_back(v + u);
			reverse(v.begin(), v.end());
			t.push_back(u + v); t.push_back(v + u);
			reverse(u.begin(), u.end());
			t.push_back(u + v); t.push_back(v + u);
		}
		sort(t.begin(), t.end());
		int cnt = 1;
		for (int j = 1; j < (int)t.size(); j++) {
			if (t[j] != t[j - 1])cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}

