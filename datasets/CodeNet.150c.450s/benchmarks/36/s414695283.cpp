#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<math.h>
#define C(_Str) cout << _Str << endl

using namespace std;

typedef long long int lli;

int main()
{
	int Num;
	while (cin >> Num) {
		int S = 0;
		for (int i = 0; i < 600; i += Num) S += i*i*Num;
		C(S);
	}
	return 0;
}