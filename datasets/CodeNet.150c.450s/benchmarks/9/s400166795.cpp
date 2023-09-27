#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
	int N,h,i,l;
	string s,t;
	while (true) {
		cin >> s;
		if (s == "-")break;
		l = s.length();
		cin >> N;
		for (i = 0; i < N; i++) {
			cin >> h;
			t = s + s;
			s = t.substr(h, l);
		}
		cout << s << endl;
	}
	return 0;
}
