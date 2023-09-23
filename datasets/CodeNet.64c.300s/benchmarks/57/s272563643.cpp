#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int r, c;

int main(){
	while (scanf("%d%d", &r, &c), r){
		int s[10000][10];
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				scanf("%d", &s[j][i]);
			}
		}
		int Max = 0;
		for (int i = 0; i < 1 << r; i++){
			int cnt = 0;
			for (int j = 0; j < r; j++){
				if (i >> j & 1){
					for (int t = 0; t < c; t++)
						s[t][j] ^= 1;
				}
			}
			for (int j = 0; j < c; j++){
				int coun = count(s[j], s[j] + r, 0);
				cnt += max(coun, r - coun);
			}
			Max = max(Max, cnt);
			for (int j = 0; j < r; j++){
				if (i >> j & 1){
					for (int t = 0; t < c; t++)
						s[t][j] ^= 1;
				}
			}
		}
		printf("%d\n", Max);
	}
	return 0;
}