#include<stdio.h>

int main()
{
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	int arr[n];	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int term = n - m;
	for(int i = 0; i < term; i++){
		int flag = 0;
		if(arr[i] < arr[i + m]){
			flag = 1;
		}
		if(flag == 1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}