#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
const long double pi = acos(-1.0); 
typedef long long ll;

struct Node {int parent, left, right;};


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	map<string, int> ma;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		ma[s] += 1;
	}
	cout << "AC x " << ma["AC"] << endl;
	cout << "WA x " << ma["WA"] << endl;
	cout << "TLE x " << ma["TLE"] << endl;
	cout << "RE x " << ma["RE"] << endl;
}