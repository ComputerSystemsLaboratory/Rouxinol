#include<bits/stdc++.h>

using namespace std;

int s, n, cnt = 0;

void solve(int x, int y, int sum){
	if(y == n){
		if(sum == s){
			++cnt;
		}
		return ;
	}
	if(x > 9) return ;
	solve(x + 1, y + 1, sum + x);
	solve(x + 1, y, sum);
	return ;
}

int main(){
	while(1){
		cin >> n >> s;
		if(n == 0 && s == 0) break;
		cnt = 0;
		solve(0, 0, 0);
		cout << cnt << endl;
	}
	return 0;
}