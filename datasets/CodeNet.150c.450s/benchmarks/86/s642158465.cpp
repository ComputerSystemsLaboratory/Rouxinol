#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=a;i<b;++i)

int main() {
	int N, M, P;
	
	while (cin >> N >> M >> P, N) {
		int win = 0, sum = 0;
		
		for_(i,0,N) {
			int X; cin >> X;
			if (i == M - 1) win = X;
			sum += X;
		}
		
		if (win == 0) cout << 0 << endl;
		else {
			double ans = (100.0 * sum) / (double)win;
			ans *= (double)(100 - P);
			ans /= 100.;
			cout << (int)ans << endl;
		}
	}
	
	return 0;
}