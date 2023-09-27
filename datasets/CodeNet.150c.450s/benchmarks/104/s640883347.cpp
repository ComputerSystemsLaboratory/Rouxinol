#include<iostream>
using namespace std;
int x[40], n, w, a, b, c, d; char f;
int main() {
	cin >> n >> w;
	for (int i = 1; i <= n; i++) {
		x[i] = i;
	}
	for (int i = 0; i < w; i++) {
		cin >> a >> f >> b;
		c = x[a];
		d = x[b];
		x[a] = d;
		x[b] = c;
	}
	for (int i = 1; i <= n; i++) {
		cout << x[i] << endl;
	}
}