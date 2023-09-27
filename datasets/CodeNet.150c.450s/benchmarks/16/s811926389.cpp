#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string s;
int st[20001];
int st_lmax[20001];
int st_rmax[20001];
int ed[20001];

int dy(char c) {
	if (c == '/') return 1;
	if (c == '_') return 0;
	return -1;
}

int main() {
	cin >> s;
	
	int i, n = s.length();
	
	st[0] = 0;
	for (i = 0; i < n; i++) {
		st[i + 1] = st[i] + dy(s[i]);
	}
	
	st_lmax[0] = st[0];
	for (i = 1; i < n + 1; i++) {
		st_lmax[i] = max(st_lmax[i - 1], st[i]);
	}
	
	st_rmax[n] = st[n];
	for (i = n - 1; i >= 0; i--) {
		st_rmax[i] = max(st_rmax[i + 1], st[i]);
	}
	
	for (i = 0; i < n + 1; i++) {
		ed[i] = min(st_lmax[i], st_rmax[i]);
	}
	
	//Answer
	vector<int> ans;
	int area = 0;
	for (i = 1; i < n + 1; i++) {
		area += ed[i - 1] - st[i - 1] + ed[i] - st[i];
		if (st[i - 1] != ed[i - 1] && st[i] == ed[i]) {
			ans.push_back(area / 2);
			area = 0;
		}
	}
	
	int ssum = 0;
	for (i = 0; i < ans.size(); i++) ssum += ans[i];
	
	cout << ssum << endl;
	cout << ans.size();
	for (i = 0; i < ans.size(); i++) {
		cout << " " << ans[i];
	}
	cout << endl;
	return 0;
}