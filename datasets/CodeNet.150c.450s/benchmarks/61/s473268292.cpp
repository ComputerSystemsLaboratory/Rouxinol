#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
#include<complex>
using namespace std;


int main() {
	complex<long double>cmpmp;
	const long long int mod = 1000000007;
	map<long long int, long long int>mp;
	//cout << fixed << setprecision(10);
	long long int N, A, B, C, x;
	long long int  ketawa = 1, Y[2000] = {}, num[10005] = {};

	while (1) {
		for (int i = 0; i < 10002; i++) {
			num[i] = 0;
		}
		cin >> N >> A >> B >> C >> x;
		if (N == 0) { return 0; }
		long long int res = -1, cou = 0;
		for (int i = 0; i < N; i++) {
			cin >> Y[i];
		}
		cou = N ;
		for (int i = 0; i <= 10000; i++) {
			if (x == Y[N - cou]) { cou--; }
			if (cou == 0) { cout << i << endl; x = -1;break; }
			
			x = (A * x + B) % C;
		}
		if (x != -1) { cout << -1 << endl; }
	}
}

