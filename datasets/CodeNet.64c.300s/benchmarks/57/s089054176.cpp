#include <iostream>
#include <vector>

using namespace std;

int main(){

	int R,C;
	int field[10][10000];
	while(cin >> R >> C && !(R == 0 && C == 0)){
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				cin >> field[i][j];
			}
		}
		int field2[10][10000];
		int maxMochi = 0;
		for(int S = 0; S < (1 << R); S++){
			for(int i = 0; i < R; i++){
				if((S >> i) & 1){
					for(int j = 0; j < C; j++){
						field2[i][j] = (field[i][j] == 0 ? 1 : 0);
					}
				}
				else{
					for(int j = 0; j < C; j++){
						field2[i][j] = (field[i][j]);
					}
				}
			}
			int sumCnt = 0;
			for(int i = 0; i < C; i++){
				int cnt = 0;
				for(int j = 0; j < R; j++){
					if(field2[j][i])
						cnt++;
				}
				sumCnt += max(cnt,R-cnt);
			}
			maxMochi = max(maxMochi,sumCnt);
		}
		cout << maxMochi << endl;
	}

	return 0;
}