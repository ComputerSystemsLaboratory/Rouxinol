#include <stdio.h>
#include <stdlib.h>

int n;

void solve(int *min,int flag,int c){
	int i;
	static int sum = 0, count = 0;
	if(count + 1 < *min && sum < n){
		for(i = 0;((i + 1) * (i + 2) * (i + 3)) / 6 + sum <= n && i < c;i++);
		while(i > 0){
			if(flag == 1 && i * (i + 1) * (i + 2) / 6 % 2 == 0){
				i--;
				continue;
			}
			sum += i * (i + 1) * (i + 2) / 6;
			count++;
			solve(min,flag,i);
			sum -= i * (i + 1) * (i + 2) / 6;
			count--;
			i--;
		}
	}
	else if(sum == n){
		if(count < *min)
			*min = count;
	}
	return;
}

int main(void){
	int min;
	scanf("%d",&n);
	while(n != 0){
		min = n;
		solve(&min,0,0x7FFFFFFF);
		printf("%d ",min);
		min = n;
		solve(&min,1,0x7FFFFFFF);
		printf("%d\n",min);
		scanf("%d",&n);
	}
	return 0;
}