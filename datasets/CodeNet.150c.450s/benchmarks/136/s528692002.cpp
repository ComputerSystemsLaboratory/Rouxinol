#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	while(cin >> a >> b) {
		int g = min(a, b);
		while(true) {
			if(a % g == 0 && b % g == 0) break;
			g--;
		}
		cout << g << ' ' << a / g * b << endl;
	}
}