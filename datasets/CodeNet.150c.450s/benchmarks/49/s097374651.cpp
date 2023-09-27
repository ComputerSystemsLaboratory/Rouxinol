#include<stdio.h>

int INF = 1e9;

int main(){
	int n;
	int s[100];
	
	
	while(1){
		scanf("%d",&n);
		if(n == 0)break;
		int sum = 0;
		int avg = 0;
		int min = INF;
		int max = 0;
		for(int i = 0;i < n;i++){
			scanf("%d",&s[i]);
			sum += s[i];
			if(max < s[i]) {max = s[i];}
			if(min > s[i]) {min = s[i];}
		}
		sum = sum - min - max;
		avg = sum / (n - 2);
		printf("%d\n", avg);
	}
}