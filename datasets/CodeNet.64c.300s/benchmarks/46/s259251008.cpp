#include<bits/stdc++.h>
using namespace std; int a, b, c, i, n;
int main() {
	while (true) {
		n = 0;
		cin >> a >> b >> c;
		if (!a) {
			break;
		}
		while(n<c){
			if (a < 2) {
				goto E;
			}
			for (i = 2; i <= sqrt(a); i++) {
				if (a%i == 0) {
					goto E;
				}
			}
			n++;
		E:;
			a += b;
		}
		cout << a - b << endl;
	}
}