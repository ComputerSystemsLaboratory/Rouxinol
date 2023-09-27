//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstring>
#include <climits>
#include <queue>
#include <utility>
#define INF INT_MAX / 2
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

int w[21][21];
int main(void) {

	int n,m;
	while(cin >> n,n!=0){
	memset(w,0,sizeof(w));
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		w[b][a] = 1;
	}
	cin >> m;
	int x,y;
	x = y = 10;
	int cnt = 0;
	if(w[y][x] == 1)cnt++;
	w[y][x] =  0;

	for(int i=0;i<m;i++){
		char c;int d;
		cin >> c >> d;
		if(c == 'N'){
			for(int i=0;i<d;i++){
				y++;
				if(w[y][x] == 1)cnt++;
				w[y][x] = 0;
			}
		}else if(c == 'S'){
			for(int i=0;i<d;i++){
				y--;
				if(w[y][x] == 1)cnt++;
				w[y][x] = 0;
			}
		}
		if(c == 'E'){
			for(int i=0;i<d;i++){
				x++;
				if(w[y][x] == 1)cnt++;
				w[y][x] = 0;
			}
		}else if(c == 'W'){
			for(int i=0;i<d;i++){
				x--;
				if(w[y][x] == 1)cnt++;
				w[y][x] = 0;
			}
		}
	}
	if(n == cnt)cout << "Yes" << endl;
	else cout << "No" << endl;
}
}

// command shift d duplicate
// command ctrl 上下
// command D
// command caps G → '' ""
// vector<vector<int>> a(N,vector<int>(M,-1));