#include<bits/stdc++.h>
using namespace std;

int dp1[1000001];
int dp2[1000001];

int main() {
	int N = 1000000;

	vector<int> v1,v2;
	int n = 1;
	while(n*(n+1)*(n+2)/6<=N) {
		int p = n*(n+1)*(n+2) / 6;
		v1.push_back(p);
		if(p%2==1)
			v2.push_back(p);
		n++;
	}

	for(int i = 0;i < N+1;i++) {
		dp1[i] = i;
		dp2[i] = i;
	}
	//cout << v1.size() << " " << v2.size() << endl;
	for(auto v : v1) {
		for(int j = v;j < N + 1;j++) {
			dp1[j] = min(dp1[j],dp1[j - v] + 1);
		}
	}
	for(auto v : v2) {
		for(int j = v;j < N + 1;j++) {
			dp2[j] = min(dp2[j],dp2[j - v] + 1);
		}
	}

	while(true) {
		int m;
		cin >> m;
		if(m == 0)
			break;
		cout << dp1[m] << " " << dp2[m] << endl;
	}
	return 0;
	
}
