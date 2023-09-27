#include <iostream>
#include <cstdio>
using namespace std;

int d, ans, c[30], s[370][30], t, lst[30];

int main() {
	int i, j;
	cin >> d;
	for(i=1; i<=26; i++) cin >> c[i];
	for(i=1; i<=d; i++) for(j=1; j<=26; j++) cin >> s[i][j];
	for(i=1; i<=d; i++) {
		cin >> t;
		ans += s[i][t];
		lst[t] = i;
		for(j=1; j<=26; j++) ans -= c[j] * (i-lst[j]);
		cout << ans << endl;
	}
}