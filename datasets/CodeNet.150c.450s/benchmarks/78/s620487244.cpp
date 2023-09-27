#include <iostream>
#include <string.h>
using namespace std;

const int INF = 1<<28;
int dp1[1000001];
int dp2[1000001];

int search(int n, int k){
	if(k == 0){
		if(dp1[n] != -1)
			return dp1[n];
	}
	else{
		if(k == 1){
			if(dp2[n] != -1)
				return dp2[n];
		}
	}
	
	if(n <= 0)
		return 0;
		
	int res = INF;
	for(int i = 1; i <= 1000000; ++i){
		int a = i * (i + 1) * (i + 2) / 6;
		if(a > n)
			break;
		if(k == 1 && a % 2 == 0)
			continue;
			
		if(k == 0)
			res = min(res, search(n - a, k) + 1);
		else
			res = min(res, search(n - a, k) + 1);
	}
	if(k == 0)
		return dp1[n] = res;
	else
		return dp2[n] = res;
}

int main() {
	memset(dp1, -1, sizeof(dp1));
	memset(dp2, -1, sizeof(dp2));
	
	for(int i = 1; i <= 1000000; ++i){
		search(i, 0);
		search(i, 1);
	}
	int n;
	while(cin >> n && n){
		cout << dp1[n] << " " << dp2[n] << endl;
	}
	return 0;
}