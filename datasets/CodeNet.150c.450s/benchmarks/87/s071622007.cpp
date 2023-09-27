#include <bits/stdc++.h>
using namespace std;
#define reps(i,j,k) for(int i=j;i<k;++i)
#define rep(i,j) reps(i,0,j)
int stage[12][12];
int W,H;
int check(){
	int prev = -1;
	int cnt = 0;
	int res = 0;
	rep(i,H){
		rep(j,W){
			if(prev != stage[i][j] || prev == 0){
				if(cnt >= 3){
					res += stage[i][j-1]*cnt;
					reps(k,j-cnt,j){
						stage[i][k] = 0;
					}
				}
				prev = stage[i][j];
				cnt = 1;
			}
			else{
				cnt++;
			}
		}
		if(cnt >= 3){
			res += stage[i][W-1]*cnt;
			reps(k,W-cnt,W){
				stage[i][k] = 0;
			}
		}
		cnt = 0;
		prev = -1;
	}
	return res;
}

void drop(){
	rep(i,H-1){
		rep(j,W){
			int c = i;
			while(stage[i][j] == 0){
				if(c == H)break;
				reps(k,i+1,H){
					stage[k-1][j] = stage[k][j];
				}
				stage[H-1][j] = 0;
				c++;
			}
		}
	}
}

int main(){
	W = 5;
	while(scanf("%d",&H),H){
		rep(i,12){
			rep(j,12){
				stage[i][j] = 0;
			}
		}
		rep(i,H){
			rep(j,W){
				scanf("%d",&stage[H-i-1][j]);
			}
		}

		int score = 0;
		while(true){
			int tmp = check();
			/*puts("**************");
			rep(i,H){
				rep(j,W){
					printf("%d",stage[i][j]);
				}
				puts("");
			}*/
			if(tmp == 0)break;
			score += tmp;
			drop();
		}	
		printf("%d\n",score);
	}
	return 0;
}