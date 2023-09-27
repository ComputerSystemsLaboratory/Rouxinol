#include <bits/stdc++.h>
using namespace std;

int a[10];
bool flag;
vector< int > l;
vector< int > r;
void dfs(int dep)
{
	if (flag) return;
	if(dep == 10) {
		flag = true;
		return;
	}
	if (l.size() == 0 || l.back() < a[dep]) {
		l.push_back(a[dep]);	
		dfs(dep + 1);
	}
	if (r.size() == 0 || r.back() < a[dep]) {
		r.push_back(a[dep]);
		dfs(dep + 1);
	}
}
int main()
{
	int t;
	cin >> t;
	for (int cas = 0; cas < t; cas++) {
		l.clear();
		r.clear();
		for (int i = 0; i < 10; i++) { cin >> a[i]; }
		flag = false;
		dfs(0);
		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}