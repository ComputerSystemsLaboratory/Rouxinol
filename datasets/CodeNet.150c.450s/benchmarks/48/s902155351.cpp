#include <iostream>
#include <math.h>
using namespace std;
int E;
int solve (int e) {
	int mi = e;
	for (int z = 0; z*z*z <= e ; z++) {
		for (int y = 0; y*y <= e ; y++) {
			if (e - y*y - z*z*z >= 0) {
				mi = min(mi,e-y*y-z*z*z+y+z);
			}
		}
	}
	return mi;
}
int min(int a,int b) {
	if (a<b) return a;
	else return b;
}
int main() {
	while (cin >> E && E > 0 ) {
		cout << solve(E) << endl;
	}
}