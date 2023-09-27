#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		bool l = false;
		if (i % 3 == 0) {
			cout << " " << i;
			l = true;
		}
		if (!l) {
			string s = to_string(i);
			for (int i = 0; i < s.length(); i++) {
				if (s[i] == '3') {
					cout << " " + s;
					break;
				}
			}
		}
	}
	cout << endl;
}