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
	int n,Count=0;
	while (cin >> n) {
		L(i, 10)L(j, 10)L(k, 10)L(l, 10)if (i + j + k + l == n) Count++;
		C(Count);
		Count = 0;
	}
	return 0;
}