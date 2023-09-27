#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int sum = 0;
		int Max = 0, Min = 1000;
		rep(i, n) {
			int s; cin >> s;
			Max = max(Max, s);
			Min = min(Min, s);
			sum += s;
		}
		cout << (sum - Max - Min) / (n - 2) << endl;
	}
}