#include <bits/stdc++.h>

using namespace std;

string a;
int L;

int toint(string s) {
	int ret = 0;
	for (int i = 0; i < L; i++) ret = 10 * ret + (s[i] - '0');
	return ret;
}

string tostr(int i) {
	stringstream s; s << i;
	return s.str();
}

void add0(string& s) {
	while ((int)s.size() != L) s = '0' + s;
}

void solve() {
	vector<int> avec;
	avec.push_back(toint(a));
	
	int cnt = 0;
	while (1) {
		cnt++;
		
		sort(a.begin(), a.end());
		int mina = toint(a);
		
		sort(a.begin(), a.end(), greater<char>());
		int maxa = toint(a);
		
		int next = maxa - mina;
		a = tostr(next);
		add0(a);
				
		for (int i = 0; i < (int)avec.size(); i++) {
			if (avec[i] == next) {
				cout << i << " " << next << " " << cnt - i << endl;
				return;
			}
		}
		
		avec.push_back(toint(a));
	}
}

int main() {
	while (1) {
		cin >> a >> L; if (L == 0) break;
		add0(a);
		solve();
	}
	
	return 0;
}