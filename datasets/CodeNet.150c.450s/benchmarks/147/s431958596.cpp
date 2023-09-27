#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <algorithm>

#include <bits/stdc++.h>
#include <cmath>
#include <limits>

using namespace std;
typedef long long LL;
using Graph = vector<vector<int>>;

static long long INF = (1LL<<62);

LL sq[180002] = {0};
LL llsqrt(LL x){
	LL ret = -1;
	for(int i=0; i*i<=x; i++){
		if(i*i == x){
			ret = (LL) i;
			break;
		}
	}
	return ret;
}
int main(int argc, char* argv[]){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, x, y, z;
	cin >> N;

	for(int i=0; i<=180000; i++){
		sq[i] = llsqrt(i);
	}

	LL ans;

	for(int k=1; k<=N; k++){
		ans = 0;
		for(x = 1; x<=100; x++){
			for(y = 1; y<=100; y++){
				LL u = 4*k - 3*x*x - 3*y*y - 2*x*y;
				if(u < 0 || u > 180000) continue;
				LL v = sq[u];
				if(v >= 0 && v - x - y > 0 && ((v-x-y) % 2) == 0){
					ans++;
				}
			}
		}
		printf("%lld\n", ans);
	}
	return 0;

}
