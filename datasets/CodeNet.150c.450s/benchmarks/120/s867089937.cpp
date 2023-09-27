#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <stack>
#include <queue>
#include <cstdio>
#include <cstdlib>
using namespace std;

int a[102][10002], f[10], n, m;

int calc(int f[10]){
	int ans = 0;
	for(int i = 0;i < m;i++){
		int res = 0;
		for(int j = 0;j < n;j++){
			if(f[j])res += !a[j][i];
			else res += a[j][i];
		}
		ans += max(res, n-res);
	}
	return ans;
}

int solve(int k, int b){
	if(k == n)return 0;
	int a[3];
	//for(int i = 0;i < 10;i++)f[i] = c[i];
	f[k] = b;
	a[0] = calc(f);
	a[1] = solve(k+1, 0);
	a[2] = solve(k+1, 1);
	sort(a, a+3);
	return a[2];
}

int main(){
	while(cin >> n >> m, n){
		for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)cin >> a[i][j];
		int x, y;
		fill(f, f+10, 0);
		x = solve(0, 0);
		y = solve(0, 1);
		cout << max(x, y) << endl;
	}
	return 0;
}