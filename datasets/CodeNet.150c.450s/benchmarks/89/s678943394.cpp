#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
#define MAXNUM 1000000

using namespace std;

int main(void){
	int flag[MAXNUM + 1], a, d, n, i, j, count;
	fill(flag,flag + MAXNUM,1);
	flag[0] = flag[1] = 0;
	for(i = 2;i <= sqrt((double)MAXNUM);i++){
		if(flag[i]){
			for(j = i * 2;j <= MAXNUM;j += i)
				flag[j] = 0;
		}
	}
	while(1){
		scanf("%d%d%d",&a,&d,&n);
		if(a == 0 && d == 0 && n == 0)
			break;
		i = count = 0;
		while(1){
			if(flag[a + d * i]){
				count++;
				if(count == n)
					break;
			}
			i++;
		}
		printf("%d\n",a + d * i);
	}
	return 0;
}