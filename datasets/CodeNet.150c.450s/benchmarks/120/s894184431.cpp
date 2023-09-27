#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	int R, C;
	
	int senbei[20][20000];
	
	int a[20];
	
	while(true){
		
		cin >> R >> C;
		
		if(R == 0 && C == 0){
			break;
		}
		
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				cin >> senbei[i][j];
			}
		}
		
		int ans, sum, sum2;
		ans = 0;
		
		for(int i = 0; i < (1 << R); i++){
			for(int j = 0; j < R; j++){
				if((i & (1 << (R - j - 1))) != 0){
					a[j] = 1;
				}else{
					a[j] = 0;
				}
			}
			sum = 0;
			for(int j = 0; j < C; j++){
				sum2 = 0;
				for(int k = 0; k < R; k++){
					if(senbei[k][j] == a[k]){
						sum2++;
					}
				}
				sum += max(sum2, R - sum2);
			}
			if(ans < sum){
				ans = sum;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}