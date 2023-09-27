#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	int n;
	string s, p;
	cin >> s;
	cin >> p;
	s += s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == p[0]) {
			for (int j = 0; j < p.size(); j++) {
				if (s[i + j] != p[j]) {
					break;
				}
				if (j == p.size() - 1) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
}