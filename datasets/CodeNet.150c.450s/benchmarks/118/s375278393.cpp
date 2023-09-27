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

//1000/1/1
//3で割り切れる時全部大の月
//大の月　20　小の月　19

//20*5 + 19*5
//20*10

int solve(int y,int m,int d){
	int ny = (y - 1) * (20*5 + 19*5) + ((y-1)/3)*5;

	int n2 = 0;
	if(y%3==0){
		n2 = (m-1)*20 + d;
	}else{
		for(int i=1;i<m;i++){
			if(i%2==0)n2 += 19;
			else n2 += 20;
		}
		n2 += d;
	}
	return ny + n2;
}

int main(void) {
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int y,m,d;
		cin >> y >> m >> d;
		cout << 196470 - solve(y,m,d) + 1 << endl;
	}
}

// command shift d duplicate
// command ctrl 上下
// command D
// command caps G → '' ""
// vector<vector<int>> a(N,vector<int>(M,-1));