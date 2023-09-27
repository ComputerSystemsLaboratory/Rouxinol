#include<stdio.h>

int main()
{
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	int inputan[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &inputan[i]);
	}
	int term = n - m;
	
	for(int i = 0; i < term; i++){
		if(inputan[i] < inputan[i + m]){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}