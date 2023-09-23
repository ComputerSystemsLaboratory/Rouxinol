#include <stdio.h>

int main()
{
	int n;
	int a[100+1];
	int max = 0;
	for(int i = 0; i < 101; i++){
		a[i] = 0;
	}
	while(scanf("%d",&n) != EOF){
		a[n]++;
	}
	for(int i = 0; i < 101; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	for(int i = 0; i < 101; i++){
		if(max == a[i]){
			printf("%d\n",i);
		}
	}
	return 0;
}