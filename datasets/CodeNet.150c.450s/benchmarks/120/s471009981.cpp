#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <map>
#include <functional>
#include <cstring>
using namespace std;
int main(){
	int h,w;
	while(scanf("%d%d",&h,&w),(h|w)){
		bool field[16][100010] = {{0}};
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				int a;
				scanf("%d",&a);
				field[i][j] = a == 1;
			}
		}
		int ans = 0;
		for(int i = 0; i < (1 << h); i++){
			bool board[16][100010];
			for(int j = 0; j < h; j++){
				if(i & (1 << j)){
					for(int k = 0; k < w; k++){
						board[j][k] = !field[j][k];
					}
				}
				else{
					for(int k = 0; k < w; k++){
						board[j][k] = field[j][k];
					}
				}
			}
			for(int j = 0; j < w; j++){
				int black = 0,white = 0;
				for(int k = 0; k < h; k++){
					if(board[k][j]) black++;
					else white++;
				}
				if(black > white){
					for(int k = 0; k < h; k++){
						board[k][j] = !board[k][j];
					}
				}
			}
			int cnt = 0;
			for(int j = 0; j < h; j++){
				for(int k = 0; k < w; k++){
					if(!board[j][k])cnt++;
				}
			}
			ans = max(ans,cnt);
		}
		printf("%d\n",ans);
	}
    return 0;
}