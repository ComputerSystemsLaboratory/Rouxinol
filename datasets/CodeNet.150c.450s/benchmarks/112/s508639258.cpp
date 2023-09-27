#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N, n, i, j,k,l;
	char a,b,c;
	vector<char> s, t,u;
	while (cin >> N) {
		if (N == 0)break;
		s.clear();
		t.clear();
		u.clear();
		for (i = 0; i < N; i++) {
			cin >> a >> b;
			s.push_back(a);
			t.push_back(b);
		}
		cin >> n;
		for (j = 0; j < n; j++) {
			cin >> c;
			for (k = 0; k < N; k++) {
				if (s[k] == c) {
					c = t[k];
					break;
				}
			}
			u.push_back(c);
		}
		for (l = 0; l < n; l++) {
			cout << u[l];
		}
		cout << endl;
	}
	return 0;
}