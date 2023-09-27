#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 100000005
#define MAX 5001
using namespace std;
//__gcd(a,b), __builtin_popcount(a);

int a[6] = {500, 100, 50, 10, 5, 1};
int solve(int n){
	int ans = 0;
	while(1){
		for(int i = 0;i < 6;i++){
			if(n >= a[i]){
				n -= a[i];
				ans++;
				break;
			}
		}
		if(n == 0)break;
	}
	return ans;
}

int main(){
	int n;
	while(cin >> n, n){
		cout << solve(1000-n) << endl;
	}
	return 0;
}