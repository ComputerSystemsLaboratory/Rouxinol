#include <cstdio>
#include <algorithm>
#include <bitset>

using namespace std;

int R, C;
int MAX = 0;
bitset<10001> pai[11];

void solve(int r){
	if(r == R) return;
	int cnt = 0;
	for(int i = 0; i < C; ++i){
		int temp = 0;
		for(int j = 0; j < R; ++j){
			temp += pai[j][i];
		}
		cnt += max(temp, R - temp);
	}
	MAX = max(MAX, cnt);
	
	solve(r + 1);
	
	pai[r].flip();
	solve(r + 1);
	pai[r].flip();
}

int main(){
	while(scanf("%d%d", &R, &C) == 2 && R && C){
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				int d; scanf("%d", &d);
				pai[i][j] = d;
			}
		}
	
		MAX = 0;
		solve(0);
		printf("%d\n", MAX);
	}
}
