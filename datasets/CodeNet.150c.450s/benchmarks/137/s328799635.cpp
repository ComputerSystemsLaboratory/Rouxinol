#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	set<string> s;
	vector<string> Ans;
	int n; string m, str; cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> m >> str;
		if (m == "find") { if (s.find(str) != s.end()) { Ans.push_back("yes"); } else { Ans.push_back("no"); } }
		else { s.insert(str); }
	}
	for (int i = 0; i < Ans.size(); i++) {
		cout << Ans[i] << endl;
	}
}