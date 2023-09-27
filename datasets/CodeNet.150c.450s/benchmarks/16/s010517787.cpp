#include<iostream>
#include <climits>
#include<vector>
#include<list>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string s;
	cin >> s;
	int i = 0, left=s.size() - 1;
	vector<int> L, R;
	int A = 0;
	while (i < s.size()) {
		while (i<s.size() - 1 && s[i] != '\\') i++;
		if (i == s.size() - 1) break;
		int height = -1;
		int j = i + 1;
		double a = 0.5;
		while (j < s.size() && height != 0) {
			a += abs(height);
			if (s[j] == '/') {
				a -= 0.5;
				height++;
			}
			if (s[j] == '\\') {
				a += 0.5;
				height--;
			}
			j++;
		}
		if (height == 0) L.push_back(a), A += a;
		else left = i;
		i = j;
	}
	i = s.size() - 1;
	while (i > left) {
		while (i > left + 1 && s[i] != '/') i--;
		if (i == left + 1) break;
		int height = -1;
		int j = i - 1;
		double a = 0.5;
		while (j > left && height != 0) {
			a += abs(height);
			if (s[j] == '/') {
				a += 0.5;
				height--;
			}
			if (s[j] == '\\') {
				a -= 0.5;
				height++;
			}
			j--;
		}
		if (height == 0) R.push_back(a), A += a;
		i = j;
	}
	reverse(R.begin(), R.end());
	L.insert(L.end(), R.begin(), R.end());
	cout << A << "\n";
	if(L.size()) cout << L.size() << " ";
	else cout << 0 << "\n";
	REP(k, L.size()) {
		if (k != L.size() - 1) cout << L[k] << " ";
		else cout << L[k] << "\n";
	}

	return 0;
}
