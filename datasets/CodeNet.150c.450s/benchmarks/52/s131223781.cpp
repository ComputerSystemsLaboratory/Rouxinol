#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	stack <int> s;
	int n;
	while(cin >> n) {
		if(n == 0) {
			cout << s.top() << '\n';
			s.pop();
		} else
			s.push(n);
	}
	return 0;
}