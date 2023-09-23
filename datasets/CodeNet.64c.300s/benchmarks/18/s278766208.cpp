#include <bits/stdc++.h>

using namespace std;

#define llong long long 
unsigned llong int n;
int memo[31][16][11];

unsigned llong int solve(int first, int second, int third, int sum){
	if(memo[first][second][third] != -1) return memo[first][second][third];
	if(sum == n){
		return memo[first][second][third] = 1;
	}
	if(sum > n) return memo[first][second][third] = 0;

	unsigned llong int ret = 0;
	for(int i = 1; i < 4; i++){
		if(i == 1) ret += solve(first + 1, second, third, sum + i);
		if(i == 2) ret += solve(first, second + 1, third, sum + i);
		if(i == 3) ret += solve(first, second, third + 1, sum + i);
	}

	return memo[first][second][third] = ret;
}

int main(){
	while(cin >> n, n){
		fill_n(**memo, 31 * 16 * 11, -1);
		unsigned llong int ans = solve(0,0,0,0);
		if(ans % 3650 == 0){
			cout << ans / 3650 << endl;
		}else{
			cout << ans / 3650 + 1 << endl;
		}
	}
	return 0;
}