#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int cnt = 0;
	for(int r = a; r <= b; r++) {
		if(c % r == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}