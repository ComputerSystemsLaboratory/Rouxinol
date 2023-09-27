#include <stdio.h>

int main(){
	int n;
	int R[200000];
	int cur_min;
	int res;
	
	scanf("%d\n", &n);
	for (int i = 0;i<n;i++){
		scanf("%d\n", &R[i]);
	}
	
	cur_min = R[0];
	res = R[1] - R[0];
	
	for (int i = 1; i < n; i++){
		if (R[i] - cur_min > res){
			res = R[i] - cur_min;
		}
		if (R[i] < cur_min){
			cur_min = R[i]; 
		}
	}
	printf("%d\n", res);
	return 0;
}
