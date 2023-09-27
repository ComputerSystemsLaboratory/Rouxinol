#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<math.h>
#define L(_i,_N) for(int _i=0;_i<_N;_i++)
#define C(_Dis) cout<<_Dis<<endl;

using namespace std;

typedef long long int lli;

int main() {
	int Loan = 100000;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		Loan *= 1.05;
		if (Loan % 1000 != 0) {
			Loan -= Loan % 1000;
			Loan += 1000;
		}
	}
	C(Loan);
	return 0;
}