#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	string s;
	vector<string>sa;
	vector<int>h;
	int z;
	string b,m;
	cin >> b;
	sa.push_back(b);
	h.push_back(1);
	z = b.size();
	m = b;
	while (cin >> s) {
		if (s.size() > z) {
			z = s.size();
			m = s;
		}
		int flg = 0;
		for (int i = 0;i < sa.size();i++) {
			if (sa[i] == s) {
				h[i]++;
				flg = 1;
				break;
			}
		}
		if (flg == 0) {
			sa.push_back(s);
			h.push_back(1);
		}

	}
	int va = 0;
	string xs;
	for (int i = 0;i < sa.size();i++) {
		if (va < h[i]) {
			va = h[i];
			xs = sa[i];
		}
	}
	cout << xs << ' ' << m << endl;
	return 0;
}