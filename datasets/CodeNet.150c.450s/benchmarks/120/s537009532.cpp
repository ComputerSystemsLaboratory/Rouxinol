#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string.h>
#include <functional>
using namespace std;

typedef pair<int, int> P;
const int INF = 1e+9;

int R, C, sen[11][10001], ans;
bool f[11]; // i行目を回転させるか

int cnt(){
	int res = 0;
	for(int j = 0; j < C; ++j){
		int cc = 0;
		for(int i = 0; i < R; ++i){
			if((!sen[i][j] && !f[i]) || (sen[i][j] && f[i]))
				cc++;
		}
		if(cc > R - cc)
				res += cc;
		else
			res += R - cc;
			
	}
	return res;
}

void rec(int n){
	if(n == R){
		ans = max(ans, cnt());
	}	
	else{
		f[n] = false; // 裏返さない
		rec(n + 1);
		f[n] = true; // 裏返す
		rec(n + 1);
	}
}

int main() {
	while(cin >> R >> C && (R || C)){
		ans = 0;
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				scanf("%d", &sen[i][j]);
			}
		}
		rec(0);
		cout << ans << endl;
	}
	
	return 0;
}