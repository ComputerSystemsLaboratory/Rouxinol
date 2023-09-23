#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void) {
	int n; cin >> n;
	int ary[n];
	int Maximum = INT_MIN;
	int Minimum = INT_MAX;
	ll sum = 0;
	for(int r = 0; r < n; r++) {
		cin >> ary[r];
		if(ary[r] > Maximum)
			Maximum = ary[r];
		if(ary[r] < Minimum)
			Minimum = ary[r];
		sum += ary[r];
	}
	cout << Minimum << " " << Maximum << " " << sum << endl;
	return 0;
}