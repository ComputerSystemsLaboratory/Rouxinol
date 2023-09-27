#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
#include<limits.h>
#define int long long
using namespace std;
 
int mincost[1000][1000];
signed main() {
	int a, b; scanf("%lld%lld", &a, &b);
	int T;cin>>T;
	for (int c = 0; c < a; c++) {
		for (int d = 0; d < a; d++) {
			mincost[c][d] = LLONG_MAX/3;
		}
		mincost[c][c] = 0;
	}
	for (int c = 0; c < b; c++) {
		int d, e, f; scanf("%lld%lld%lld", &d, &e, &f);
		mincost[d][e]=f;
	}
	for (int x = 0; x < a; x++) {
		for (int y = 0; y < a; y++) {
			for (int z = 0; z < a; z++) {
				if (mincost[y][x] != LLONG_MAX/3&& mincost[x][z] != LLONG_MAX/3) {
					mincost[y][z] = min(mincost[y][z], mincost[y][x] + mincost[x][z]);
				}
			}
		}
	}
	for (int i = 0; i < a; i++) {
		if (mincost[T][i]!=LLONG_MAX/3&&mincost[i][i] < 0) {
			puts("NEGATIVE CYCLE");
			return 0;
		}
	}
	for (int i = 0; i < a; i++) {
		if(mincost[T][i]==LLONG_MAX/3)puts("INF");
		else cout<<mincost[T][i]<<endl;
	}	
}