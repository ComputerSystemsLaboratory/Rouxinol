#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(void){
	int r, c, b, i, j, s[10][10000], t[10][10000], m, sum,mx;
	while(1){
		scanf("%d%d",&r,&c);
		if(r == 0 && c == 0) break;
		mx = 0;
		for(i = 0;i < r;i++){
			for(j = 0;j < c;j++)
				scanf("%d",&s[i][j]);
		}
		for(b = 0;b < (1 << r);b++){
			memcpy(t,s,sizeof(s));
			for(i = 0;i < r;i++){
				if(b & (1 << i)){
					for(j = 0;j < c;j++)
						t[i][j] = (t[i][j] + 1) % 2;
				}
			}
			sum = 0;
			for(i = 0;i < c;i++){
				m = 0;
				for(j = 0;j < r;j++)
					if(!t[j][i]) m++;
				sum += max(m,r - m);
			}
			mx = max(mx,sum);
		}
		printf("%d\n",mx);
	}
	return 0;
}