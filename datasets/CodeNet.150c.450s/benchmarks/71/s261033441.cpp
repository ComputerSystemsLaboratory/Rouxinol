#include <bits/stdc++.h>

using namespace std;

#define llong long long 
int n;
int ans;
bool memo[1001];

void solve(int num, int sum, int d){
	if(d == 4){
		if(sum == num){
			ans++;			
		}
		return;
	}

	if(num < sum) return;

	for(int i = 0;i <= 9; i++){
		solve(num, sum + i, d + 1);
	}
	return;
}

int main(){
	while(cin >> n){
		ans = 0;
		solve(n, 0, 0);
		cout << ans << endl;
	}

	return 0;
}