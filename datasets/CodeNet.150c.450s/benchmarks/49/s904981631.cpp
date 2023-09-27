#ifndef _WIN32
#include<iostream>
#endif
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<functional>
#include<vector>
#include<queue>
#include<string>
#include<stdlib.h>

using namespace std;
#define rep(i,n) for(auto i=(n)*0;i<n;i++)
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	cout << fixed << setprecision(30);
	int n;
	while (cin >> n, n){
		int top = 0, bottom = 1000,sum=0;
		rep(i, n){
			int s;
			cin >> s;
			sum += s;
			top = max(top, s);
			bottom = min(bottom, s);
		}
		cout << (sum - top - bottom)/(n-2) << endl;
	}
	return 0;
}