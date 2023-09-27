#include <cstdio>
using namespace std;

int main(){
	const int MAX_H = 10;
	int H, board[MAX_H][5];
	int l, res, sub;
	bool deleted;
	
	while(true){
		scanf("%d", &H);
		if(H == 0) break;
		for(int i = 0; i < H; i++){
			for(int j = 0; j < 5; j++){
				scanf("%d", &board[i][j]);
			}
		}
		
		deleted = true;
		res = 0;
		while(deleted){
			deleted = false;
			for(int i = 0; i < H; i++){
				for(int j = 0; j < 5;){
					l = j;
					while(j < 5 && board[i][l] == board[i][j]) j++;
					if(j - l >= 3 && board[i][l] != 0){
						res += board[i][l] * (j - l);
						for(int k = l; k < j; k++) board[i][k] = 0;
						deleted = true;
					}
				}
			}
			
			for(int j = 0; j < 5; j++){
				for(int i = 0; i < H; i++){
					if(board[i][j] == 0){
						for(int k = i; k - 1 >= 0; k--){
							sub = board[k][j];
							board[k][j] = board[k - 1][j];
							board[k - 1][j] = sub;
						}
					}
				}
			}
		}
		printf("%d\n", res);
	}
	
	return 0;
}