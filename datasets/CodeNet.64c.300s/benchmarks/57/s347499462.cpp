#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#define min(a,b)    (((a) < (b)) ? (a) : (b))
#define max(a,b)    (((a) > (b)) ? (a) : (b))
#define abs(x)    ((x) < 0 ? -(x) : (x))
#define INF 0x3f3f3f3f
#define delta 0.85
#define eps 1e-3
#define PI 3.14159265358979323846
#define MAX_R 10
#define MAX_C 10000
using namespace std;
int R, C;
int mp[MAX_R][MAX_C];

int main(){
	while(~scanf("%d%d", &R, &C) && R){
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				scanf("%d", &mp[i][j]);
			}
		}
		int res = 0;
		for(int i = 0; i < 1 << R; i++){
			int flip[MAX_R];
			for(int j = 0; j < R; j++){
				flip[j] = (1 & (i >> j)) ? 1 : 0;
			}
			int sum = 0;
			for(int j = 0; j < C; j++){
				int tmp = 0;
				for(int k = 0; k < R; k++){
					tmp += mp[k][j] ^ flip[k];
				}
				sum += max(tmp, R - tmp);
			}
			res = max(res, sum);
		}
		printf("%d\n", res);
	}
	return 0;
}
