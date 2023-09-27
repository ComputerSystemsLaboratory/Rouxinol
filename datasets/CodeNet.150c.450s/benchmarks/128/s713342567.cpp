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
	string Str;
	cin >> Str;
	reverse(Str.begin(),Str.end());
	C(Str);
	return 0;
}