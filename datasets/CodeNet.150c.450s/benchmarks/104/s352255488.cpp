#include<iostream>
#include<vector>
using namespace std;
int main() {
	int w, n, a, b,c;
	vector<int> s;
	cin >> w >> n;
	for (int j = 1; j <= w; j++) {
		s.push_back(j);
	}
	for (int i = 0; i < n; i++) {
		(cin >> a).ignore() >> b;
		c = s[a - 1];
		s[a - 1] = s[b - 1];
		s[b - 1] = c;
	}
	for (int k = 0; k < w; k++) {
		cout << s[k] << endl;
	}
	return 0;
}