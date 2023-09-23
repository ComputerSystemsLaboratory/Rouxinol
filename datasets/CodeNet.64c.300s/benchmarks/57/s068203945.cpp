#include <cstdio>
#include <algorithm>
using namespace std;


int senbei[10][10000];

int main()
{
	int r, c;
	while (scanf("%d %d", &r, &c), r + c){
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				scanf("%d", &senbei[i][j]);
			}
		}
		
		int maxi = 0;
		for (int i = 0; i < (1 << r); i++){
			int sum = 0;
			for (int j = 0; j < c; j++){
				int cnt = 0;
				for (int k = 0; k < r; k++){
					cnt += senbei[k][j] ^ !!((1 << k) & i);
				}
				
				sum += max(cnt, r - cnt);
			}
			maxi = max(maxi, sum);
		}
		
		printf("%d\n", maxi);
	}
	
	return 0;
}