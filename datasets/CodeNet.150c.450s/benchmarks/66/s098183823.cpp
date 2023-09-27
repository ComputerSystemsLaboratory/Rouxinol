#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n; scanf("%d", &n);
	vector<string>v;
	rep(i, n) {
		string s; cin >> s;
		v.push_back(s);
	}
	int m; scanf("%d", &m);
	bool b = false;
	rep(i, m) {
		string s; cin >> s;
		if (find(v.begin(), v.end(), s) == v.end())
			cout << "Unknown " << s << endl;
		else {
			if (b)cout << "Closed by " << s << endl;
			else cout << "Opened by " << s << endl;
			b = !b;
		}
	}
}