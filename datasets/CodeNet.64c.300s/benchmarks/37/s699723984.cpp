//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstring>
#include <climits>
#include <queue>
#include <algorithm>
#include <utility>
#define INF INT_MAX / 2
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

int main(void) {
	int n;

	while(cin >> n,n!=0){
	int l,r;
	l = r = 1;
	int sum = 0,cnt = 0;
	for(;;){
		while(sum <= n && r<=n){
			sum += r;
			if(sum == n)cnt++;
			r++;
		}
		if(r == n+1)break;
		sum -= l;
		if(sum == n && l != r-1)cnt++;
		l++;
	}
	if(n == 1)cout << 0 << endl;
	else cout << cnt << endl;
}
}

// command shift d duplicate
// command ctrl 上下
// command D
// command caps G → '' ""
// vector<vector<int>> a(N,vector<int>(M,-1));