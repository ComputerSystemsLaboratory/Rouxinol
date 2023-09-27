#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORR(i,a,b) for (int i=a; i>=b; i--)

typedef long long ll;

int w,h;
bool c[50][50];
int dx[9] = {-1,-1,-1,0,0,0,1,1,1} , dy[9] = {-1,0,1,-1,0,1,-1,0,1};

bool isok(int i ,int j){
	return i>=0 && i<h && j>=0 && j<w;
}

void dfs(int i, int j){
	c[i][j] = 0;
	REP(k,9){
		int ii=i+dx[k] , jj=j+dy[k];
		if (isok(ii,jj)&&c[ii][jj]){
			dfs(ii,jj);
		}
	}
}

int main(void){
	while (cin >> w >> h && w){
		REP(i,h) REP(j,w) cin >> c[i][j];
		int ans = 0;
		REP(i,h){
			REP(j,w){
				if (c[i][j]==1){
					dfs(i,j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}