#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;


int solve(int n, int sum, int amax) {
	if (n == 0) {
		if (sum == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (amax*n < sum ||0 * n>sum)return 0;
	else {
		int nans=0;
		for (int x =0; x <= amax; ++x) {
			nans+=solve(n-1,sum-x,x-1);
		}
		return nans;
	}
}


int main() {
	while (true) {
		int N,S;cin>>N>>S;
		if(!N)break;
		int ans=solve(N,S,9);
		cout<<ans<<endl;

	}
	return 0;
}
