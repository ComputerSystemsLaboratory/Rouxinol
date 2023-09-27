#include <iostream>
using namespace std;

const int H = 10, W = 5;

int board[H][W];

int main(){
	int h, score, inc;
	while(cin >> h, h){
		inc = 1;
		score = 0;
		for(int i = 0;i < h;++i){
			for(int j = 0;j < W;++j){
				cin >> board[i][j];
			}
		}
		while(inc){
			int c, k;
			inc = 0;
			for(int i = 0;i < h;++i){
				for(int j = 0;j < W;++j){
					c = 0;
					for(int k = j;k < W && board[i][j] == board[i][k];++k){
						++c;
					}
					if(c >= 3){
						inc += board[i][j] * c;
						for(int k = j;k < j + c;++k){
							board[i][k] = 0;
						}
					}
					j += (c - 1);
				}
			}
			for(int i = 1;i < h;++i){
				for(int j = 0;j < W;++j){
					if(!board[i][j]){
						for(int k = i - 1;0 <= k;--k){
							board[k + 1][j] = board[k][j];
						}
						board[0][j] = 0;
					}
				}
			}
			score += inc;
		}
		cout << score << endl;
	}
	return 0;
}