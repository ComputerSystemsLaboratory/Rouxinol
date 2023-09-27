#include <iostream>

using namespace std;

int main(){
	int H;
	cin >> H;
	while (H){
		int B[10][5] = { 0 }, score = 0;
		for (int i = 0; i < H; i++){
			cin >> B[i][0] >> B[i][1] >> B[i][2] >> B[i][3] >> B[i][4];
		}
		int flag = 1;
		while (flag){
			flag = 0;
			for (int i = 0; i < H; i++){
				int connection = 0, j;
				for (j = 1; j < 5; j++){
					if (B[i][j] && B[i][j - 1] == B[i][j]){
						connection++;
					} else{
						if (connection >= 2){
							break;
						}
						connection = 0;
					}
				}
				if (connection >= 2){
					score += B[i][j - 1] * (connection + 1);
					for (int k = j - 1; k >= j - connection - 1; k--){
						B[i][k] = 0;
					}
					flag = 1;
				}
			}
			for (int i = 0; i < 5; i++){
				for (int j = H - 1; j > 0; j--){
					for (int k = H - 1; k > 0; k--){
						if (!B[k][i]){
							B[k][i] = B[k - 1][i];
							B[k - 1][i] = 0;
						}
					}
				}
			}
		}
		cout << score << endl;
		cin >> H;
	}
	return 0;
}