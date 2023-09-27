#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

bool hantei(int mask, int pos){
	if(mask & (1 << pos))return true;
	else return false;
}
int board[11][10010];
int main(void){
	int r, c;
	while(1){
		cin >> r >> c;
		if(r == 0 && c == 0) return 0;
		rep(i, r) rep(j, c) cin >> board[i][j];
		long long ans = 0;
		for (int mask = 0; mask < (1 << r); ++mask){
			vector<int> sum(c, 0);//v[i] := i?????????0????????°
			for (int pos = 0; pos < r; ++pos){
				if(hantei(mask, pos)){//?????¢
					for (int i = 0; i < c; ++i){
						if(board[pos][i] == 1) sum[i]++;//0?????°?????????
					}
				}else{//????????????
					for (int i = 0; i < c; ++i){
						if(board[pos][i] == 0) sum[i]++;
					}
				}
			}
			long long tmp = 0;
			for (int i = 0; i < c; ++i){
				if(sum[i] < (double)r / 2.0) tmp += (r - sum[i]);
				else tmp += sum[i];
			}
			ans = max(ans, tmp);
		}
		printf("%lld\n", ans);
	}
}