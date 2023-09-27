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

int next(int x,int a,int b,int c){
	return (a*x+b)%c;
}

int main(void) {
	int n,a,b,c,x;
	while(cin >> n >> a >> b >> c >> x,n+a+b+c+x!=0){
	vector<int> col(n);
	for(int i=0;i<n;i++){
		cin >> col[i];
	}
	int cnt = 0;
	bool f=false;
	for(int i=1;i<=10001;i++){
		if(col[cnt] == x){
			cnt++;
			if(cnt == n){
				f = true;
				cout << i-1 << endl;
				break;
			}
		}
		x = next(x,a,b,c);
	}
	if(!f)cout << -1 << endl;
}
}

// command shift d duplicate
// command ctrl 上下
// command D
// command caps G → '' ""
// vector<vector<int>> a(N,vector<int>(M,-1));