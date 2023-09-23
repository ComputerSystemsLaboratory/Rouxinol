#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>

using namespace std;


int main() {
	int n;
	char a[53];
	int b[53];	
	int s[53];
	int h[53];
	int c[53];
	int d[53];
	fill(s, s + 53, 0);
	fill(h, h + 53, 0);
	fill(c, c + 53, 0);
	fill(d, d + 53, 0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	for(int i=1;i<=n;i++){
		if (a[i] == 'S') s[b[i]] = 1;
		else if (a[i] == 'H') h[b[i]] = 1;
		else if (a[i] == 'C') c[b[i]] = 1;
		else d[b[i]] = 1;
	}
	for (int i = 1; i <= 13;i++) {
		if (s[i] == 0) cout << "S " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (h[i] == 0) cout << "H " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (c[i] == 0) cout << "C " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (d[i] == 0) cout << "D " << i << endl;
	}
}