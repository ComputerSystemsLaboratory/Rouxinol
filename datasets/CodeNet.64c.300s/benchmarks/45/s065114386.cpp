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
	int N,M,P;
	while(cin >> N >> M >> P,N+M+P!=0){
		int x,wm = 0,all = 0;
		for(int i=1;i<=N;i++){
			cin >> x;
			if(i==M){
				wm = x;
			}
			all += x;
		}

		if(wm == 0){
			cout << 0 << endl;
		}else{
			int sub = 0;
			all *= 100;
			sub = (all*P)/100;
			wm = (all-sub)/wm;
			cout << wm << endl;
		}
	}
}

// command shift d duplicate
// command ctrl 上下
// command D
// command caps G → '' ""
// vector<vector<int>> a(N,vector<int>(M,-1));