#include <stdio.h>
#include <math.h>

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int *arr = new int[n + 1];
		int loop = (int)sqrt(n);
		
		for(int i = 2; i <= loop; i++){
			if(arr[i] == 0){
				for(int j = 2*i; j <= n; j += i){
					arr[j] = 1;
				}
			}
		}
		
		int cnt = 0;
		for(int i = 2; i <= n; i++){
			if(arr[i] == 0){
				cnt++;
			}
		}
		delete [] arr;
		
		printf("%d\n", cnt);
	}
	return 0;
}