#include<bits/stdc++.h>
using namespace std;
static const int MAX_R = 10;
static const int MAX_C = 10000;
int main(){
	int R, C;
	bool field[MAX_R][MAX_C];
	bool field1[MAX_R][MAX_C];
	for(;;){
		scanf("%d %d", &R, &C);
		if(R == 0 && C == 0) break;
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				int input;
				scanf("%d", &input);
				if(input == 1) field[i][j] = true;
				else if(input == 0) field[i][j] = false;
			}
		}
		int ans = 0;
		for(int i = 0; i < (1 << R); i++){
			for(int j = 0; j < R; j++){
				for(int k = 0; k < C; k++){
					field1[j][k] = field[j][k];
				}
			}
			for(int j = 0; j < R; j++){
				if(i & (1 << j)){
					for(int k = 0; k < C; k++){
						field1[j][k] = !field1[j][k];
					}
				}
			}
			int sum = 0;
			for(int j = 0; j < C; j++){
				int num = 0;
				for(int k = 0; k < R; k++){
					if(field1[k][j]) num++;
				}
				sum += max(num, R - num);
			}
			if(ans < sum) ans = sum;
		}
		printf("%d\n", ans);
	}
	return 0;
}