#include<iostream>
#include<vector>
using namespace std;

#define M 1000000
#define INF 10000000

#define min(a,b) (a<b?a:b)

int main() {
	int n, p;
	vector<int> fn, fno;
	static int dp[M+1], odp[M+1];
	for(int i=1;; ++i) {
		p = i*(i+1)*(i+2)/6;
		if(p>M) break;
		fn.push_back(p);
		if(p%2) fno.push_back(p);
	}
	for(int i=0; i<=M; ++i) dp[i] = odp[i] = INF;
	dp[0] = 0; dp[1] = 1; odp[0] = 0; odp[1] = 1;
	for(int i=2; i<=M; ++i) {
		for(int j=0; j<(signed)fn.size(); ++j) {
			if(i-fn[j]>=0) dp[i] = min(dp[i], dp[i-fn[j]]+1);
			else break;
		}
		for(int j=0; j<(signed)fno.size(); ++j) {
			if(i-fno[j]>=0) odp[i] = min(odp[i], odp[i-fno[j]]+1);
			else break;
		}
	}
	
	while(1) {
		cin >> n;
		if(!n) break;
		cout << dp[n] << " " << odp[n] << endl;
	}
	return 0;
}