#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <list>
using namespace std;

int main() {
	int n, m, count = 0, s[10001];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cin >> m;
	for(int i = 0; i < m; i++) {
		int t, j=0;
		cin >> t;
		s[n] = t;
		while(s[j] != t) j++;
		if(j != n) count++;
	}
	cout << count <<endl;
	return 0;
}