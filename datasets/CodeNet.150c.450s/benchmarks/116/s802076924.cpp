#include<stdio.h>

//更新書き換え型
int MAX(int *num,int n,int k){
	int i,now,max = 0;
	for(i = 0;i < k;i++){
		max += num[i];
	}
	now = max;
	for(i = 0;i < n-k;i++){
		now += num[i+k]-num[i];
		if(max < now)
			max = now;
	}
	return max;
}
int main(){
	int n,k,max;
	int *num;
	int i;
	while(1){
		scanf("%d%d",&n,&k);
		if(n == 0 && k == 0)
			break;
		num = new int[n];
		for(i = 0;i < n;i++){
			scanf("%d",num+i);
		}
		max = MAX(num,n,k);
		printf("%d\n",max);
		delete[] num;
	}
	return 0;
}